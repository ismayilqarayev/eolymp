# Student Management System

A complete student management application built with Java backend and React TypeScript frontend.

## Project Structure

```
eolymp/
├── demo/                          # Java Backend
│   ├── src/main/java/com/example/
│   │   ├── ApiServer.java        # HTTP server with REST API
│   │   ├── Student.java          # Student model with JSON support
│   │   └── StudentManager.java   # Business logic layer (optional)
│   ├── pom.xml                   # Maven configuration
│   └── out/                       # Compiled classes
│
└── react-ts-app/                 # React TypeScript Frontend
    ├── src/
    │   ├── components/           # Reusable UI components
    │   │   ├── StudentList.tsx
    │   │   ├── StudentForm.tsx
    │   │   └── Status.tsx
    │   ├── styles/               # Component-specific CSS
    │   ├── types.ts              # TypeScript type definitions
    │   ├── App.tsx               # Main App component
    │   ├── main.tsx              # Entry point
    │   └── index.css             # Global styles
    ├── dist/                     # Built production files
    ├── package.json
    ├── vite.config.ts
    └── tsconfig.json
```

## Features

### Backend API (Java HttpServer)
- `GET /api/message` - Test endpoint
- `GET /api/students` - List all students
- `POST /api/students` - Create student
- `GET /api/students/{id}` - Get student by ID
- `PUT /api/students/{id}` - Update student
- `DELETE /api/students/{id}` - Delete student
- `GET /` - Serve React frontend static files

### Frontend (React + TypeScript)
- Student list with search/filter
- Add new student form
- Edit existing student
- Delete student with confirmation
- Backend status indicator
- Error handling and loading states
- Responsive design

## Quick Start

### Backend Setup

1. **Compile Java backend:**
   ```bash
   cd demo
   javac -d out src/main/java/com/example/*.java
   ```

2. **Run Java server:**
   ```bash
   java -cp out com.example.ApiServer
   ```
   Server runs on `http://localhost:8080`

### Frontend Setup

1. **Install dependencies:**
   ```bash
   cd react-ts-app
   npm install
   ```

2. **Build production:**
   ```bash
   npm run build
   ```
   Output in `dist/` folder

3. **Development (with hot reload):**
   ```bash
   npm run dev
   ```
   Dev server runs on `http://localhost:5173` with proxy to `localhost:8080`

## API Endpoints

### List Students
```
GET /api/students
Response: [{"id":1,"name":"Ali"},{"id":2,"name":"Leyla"}]
```

### Create Student
```
POST /api/students
Content-Type: application/json
Body: {"name":"Murad"}
Response: {"id":3,"name":"Murad"}
```

### Update Student
```
PUT /api/students/1
Content-Type: application/json
Body: {"name":"Muhammad"}
Response: {"id":1,"name":"Muhammad"}
```

### Delete Student
```
DELETE /api/students/1
Response: 204 No Content
```

## Technology Stack

- **Backend**: Java 17+, HttpServer API
- **Frontend**: React 18, TypeScript 5, Vite, CSS3
- **Communication**: REST API, JSON

## Browser Support

- Chrome/Edge 90+
- Firefox 88+
- Safari 14+

## Default Data

The application comes with 3 default students:
1. Ali (ID: 1)
2. Leyla (ID: 2)
3. Murad (ID: 3)

## Notes

- Student data is stored in memory and will be reset on server restart
- No database setup required for local development
- All static files are served from `react-ts-app/dist/`
