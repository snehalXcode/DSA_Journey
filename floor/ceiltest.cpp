// // floor - go down ceil - go up
// // floor code
// // int floorValue(vector<int>& nums, int target) {

//     int low = 0;
//     int high = nums.size() - 1;

//     int ans = -1;

//     while(low <= high) {

//         int mid = low + (high - low) / 2;

//         if(nums[mid] <= target) {

//             ans = nums[mid];
//             low = mid + 1;
//         }
//         else {

//             high = mid - 1;
//         }
//     }

//     return ans;
// }

// ceil code
// int ceilValue(vector<int>& nums, int target) {

//     int low = 0;
//     int high = nums.size() - 1;

//     int ans = -1;

//     while(low <= high) {

//         int mid = low + (high - low) / 2;

//         if(nums[mid] >= target) {

//             ans = nums[mid];
//             high = mid - 1;
//         }
//         else {

//             low = mid + 1;
//         }
//     }

//     return ans;
// }