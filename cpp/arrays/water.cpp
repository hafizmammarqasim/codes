int maxArea(vector<int>& height) {
    int area = 0, recArea = 0;
    const  int size = height.size();
    int i = 0, j = size - 1;

    while (1) {
        if (j > i) {
            if (height[i] < height[j]) {
                recArea = height[i] * (j - i);

            }
            else {
                recArea = height[j] * (j - i);

            }
            if (recArea > area) {
                area = recArea;
            }
        }
        else {
            break;
        }

        if (height[j] > height[i]) {
            i++;
        }
        else {
            j--;
        }
    }
    return area;
}
