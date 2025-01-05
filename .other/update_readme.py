import requests
import os
from datetime import datetime

OWNER = 'tynnp'
REPO = 'CP-Practice'
TOKEN = os.getenv('UPDATE_PRACTICE')

def get_file_count_2025():
    url = f'https://api.github.com/repos/{OWNER}/{REPO}/commits'
    headers = {
        'Authorization': f'token {TOKEN}',
        'Accept': 'application/vnd.github.v3+json'
    }

    params = {
        'since': '2025-01-01T00:00:00Z', 
        'until': '2025-12-31T23:59:59Z'   
    }

    response = requests.get(url, headers=headers, params=params)
    if response.status_code != 200:
        print(f"Failed to fetch commits: {response.status_code}")
        return 0

    commits = response.json()
    files_2025 = set()

    # Lấy danh sách các file được chỉnh sửa từ commit trong năm 2025
    for commit in commits:
        commit_url = commit['url']  # Link để lấy chi tiết commit
        commit_response = requests.get(commit_url, headers=headers)
        if commit_response.status_code != 200:
            continue

        commit_data = commit_response.json()
        if 'files' in commit_data:
            for file in commit_data['files']:
                files_2025.add(file['filename'])

    return len(files_2025)

def update_readme(file_count):
    readme_path = 'README.md'

    with open(readme_path, 'r') as file:
        content = file.readlines()

    found = False
    for i, line in enumerate(content):
        if line.startswith('- Số lượng file bài giải trong năm 2025: '):
            if content[i].strip() != f'- Số lượng file bài giải trong năm 2025: {file_count}.':
                content[i] = f'- Số lượng file bài giải trong năm 2025: {file_count}.\n'
                found = True
            break

    if not found:
        content.append(f'- Số lượng file bài giải trong năm 2025: {file_count}.\n')

    with open(readme_path, 'w') as file:
        file.writelines(content)

    print(f'Updated README.md with 2025 file count: {file_count}')

if __name__ == "__main__":
    file_count_2025 = get_file_count_2025()
    print(f'File count in 2025: {file_count_2025}')
    update_readme(file_count_2025)
