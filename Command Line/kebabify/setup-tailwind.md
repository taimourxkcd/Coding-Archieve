```
npm init -y
npm install vite tailwindcss postcss autoprefixer
npx tailwindcss init -p


tailwind.config.js
/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["*"],
  theme: {
    extend: {},
  },
  plugins: [],
};



input.css
@tailwind base;
@tailwind components;
@tailwind utilities;



in package.json
"scripts": {
  "start": "vite"
}



maybe npm install vite

npm run start







```
