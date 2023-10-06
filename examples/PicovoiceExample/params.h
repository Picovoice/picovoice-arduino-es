
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = hola computadora
static const uint8_t KEYWORD_ARRAY[] = {
        0x1c, 0xce, 0x7c, 0xd9, 0xc2, 0x23, 0x16, 0x70, 0x85, 0xf7, 0x93, 0x1a, 0x59, 0xd0, 0x62, 0xce, 0xac, 0x16,
        0xd1, 0x3e, 0x05, 0x02, 0x6d, 0x26, 0x65, 0x81, 0xc9, 0xd5, 0xae, 0x93, 0x30, 0x29, 0x02, 0x0a, 0x0d, 0xc3,
        0xc9, 0xf7, 0x80, 0xfc, 0x2a, 0x2c, 0x76, 0x68, 0xb3, 0x78, 0x70, 0x64, 0xf6, 0xbb, 0xbe, 0x84, 0xa3, 0xae,
        0x4a, 0x9b, 0x96, 0x84, 0x8e, 0x5b, 0xc9, 0x8d, 0x80, 0x6a, 0xd9, 0xf8, 0x20, 0x9a, 0xcf, 0x55, 0x23, 0x33,
        0x7c, 0x6a, 0x99, 0x16, 0x0f, 0x04, 0x87, 0x41, 0xef, 0x3f, 0x0f, 0x20, 0xe0, 0xe6, 0xdd, 0x1f, 0x62, 0x0a,
        0x0c, 0x13, 0x0d, 0x59, 0x52, 0x1d, 0x6d, 0x59, 0x95, 0xec, 0xf8, 0xe1, 0x08, 0x17, 0x5a, 0xaf, 0x87, 0x6e,
        0xdf, 0x24, 0x2f, 0x39, 0x8e, 0xcc, 0x90, 0xbd, 0xd3, 0x3d, 0x7d, 0xba, 0x07, 0xcd, 0xe3, 0x0a, 0xf3, 0x96,
        0x31, 0x13, 0x3d, 0xa1, 0x0b, 0x00, 0xb2, 0x54, 0x41, 0xbe, 0x1b, 0x83, 0x5d, 0xbc, 0x44, 0x7c, 0x36, 0x69,
        0xd1, 0x87, 0x24, 0xf8, 0x5c, 0x72, 0xe8, 0x65, 0x65, 0x49, 0xae, 0xee, 0xe2, 0xf9, 0x13, 0x40, 0x18, 0x4a,
        0xaf, 0x4e, 0xf8, 0xe4, 0x65, 0xe1, 0x4e, 0x5a, 0xb9, 0xcc, 0x32, 0xab, 0x37, 0xfe, 0x82, 0x54, 0xec, 0x7c,
        0xb7, 0x1d, 0x09, 0x66, 0x59, 0xd5, 0x47, 0x3f, 0x71, 0xa2, 0xb8, 0x74, 0xe6, 0x41, 0x8b, 0x63, 0x0e, 0xcc,
        0xd7, 0xc8, 0x56, 0xa5, 0xe1, 0x06, 0x81, 0x95, 0x45, 0x5c, 0x20, 0x82, 0xdb, 0xe2, 0x5a, 0xba, 0xc6, 0x16,
        0x4f, 0x08, 0x51, 0xb5, 0xcd, 0x0c, 0x2f, 0x7c, 0x96, 0xff, 0xfc, 0x5e, 0x21, 0xc0, 0x14, 0xf0, 0x50, 0xa6,
        0x7a, 0x09, 0xbb, 0xcf, 0x4b, 0x14, 0x39, 0xc0, 0x03, 0xd3, 0x2c, 0x6a, 0x45, 0xfe, 0xf8, 0xea, 0x77, 0xd4,
        0x2b, 0xfb, 0x24, 0x58, 0xd1, 0x73, 0x93, 0x13, 0x3a, 0x32, 0x16, 0x3a, 0xb5, 0x64, 0x97, 0x6f, 0xc7, 0xa6,
        0x71, 0xee, 0x47, 0x5a, 0xeb, 0x66, 0xad, 0xb3, 0xf5, 0x1f, 0x0c, 0x14, 0x3a, 0xfc, 0xb4, 0x53, 0xc2, 0xaa,
        0xf6, 0x77, 0x1d, 0x0c, 0x6a, 0x6c, 0x78, 0xb8, 0xb5, 0x7d, 0xd2, 0x8b, 0x97, 0x04, 0xbe, 0x0c, 0xa9, 0xa8,
        0x6c, 0x48, 0x6b, 0x92, 0x14, 0x44, 0x3c, 0x6e, 0x64, 0x95, 0x0f, 0xf6, 0x0f, 0x5d, 0x74, 0xf8, 0xa6, 0xc4,
        0xf4, 0x26, 0x04, 0x38, 0xb5, 0x79, 0x4a, 0xe5, 0x47, 0xb2, 0xc6, 0x5a, 0x82, 0xd6, 0xfd, 0x19, 0xfd, 0xd2,
        0xef, 0x7b, 0x29, 0xc1, 0x2c, 0xc7, 0x03, 0xff, 0xa1, 0xfd, 0xf5, 0x91, 0x87, 0x4f, 0x8a, 0x68, 0x40, 0xdd,
        0xb4, 0x6d, 0x64, 0xb4, 0x8b, 0x0c, 0x87, 0x54, 0x68, 0x1b, 0xc3, 0x12, 0x52, 0xb9, 0x1f, 0x0d, 0x0b, 0x4b,
        0x5a, 0x88, 0x79, 0x6e, 0xdc, 0x1d, 0x45, 0x37, 0xca, 0x44, 0x18, 0xb6, 0x9f, 0x2e, 0xdc, 0x24, 0xcc, 0xb2,
        0x20, 0x66, 0x4e, 0x88, 0x4f, 0x3c, 0x1e, 0x52, 0x02, 0x30, 0x58, 0xb7, 0x7b, 0xaa, 0xf4, 0x95, 0xee, 0xbe,
        0xbc, 0xbf, 0x2a, 0x8b, 0xe8, 0xff, 0x14, 0xb5, 0xad, 0xc2, 0xfc, 0x1d, 0xef, 0xc8, 0x56, 0x4f, 0xb5, 0xa5,
        0x6e, 0xa4, 0x47, 0x27, 0xaa, 0x12, 0xf6, 0x8d, 0x85, 0xc9, 0xb0, 0x16, 0xbb, 0xed, 0x63, 0x64, 0xa3, 0x4d,
        0x71, 0x03, 0x2e, 0xa8, 0xf3, 0xdf, 0x1e, 0x03, 0x45, 0x96, 0xae, 0x71, 0xad, 0x0e, 0xf4, 0x1a, 0xec, 0x59,
        0xc5, 0x35, 0x7f, 0x4f, 0xbb, 0x30, 0x36, 0xff, 0x81, 0x6f, 0x17, 0xe6, 0xba, 0x1a, 0xb6, 0xb0, 0xfa, 0x52,
        0x45, 0xec, 0xd8, 0x8e, 0x2e, 0xef, 0x4c, 0x56, 0xba, 0x3d, 0xa8, 0x84, 0x57, 0xa1, 0x81, 0x08, 0xe0, 0x80,
        0x75, 0x01, 0xf3, 0x09, 0x93, 0x14, 0xd4, 0x19, 0xc4, 0xe9, 0x1c, 0xf8, 0x0e, 0xa9, 0x43, 0x02, 0xa3, 0x4d,
        0x21, 0xa0, 0x37, 0x35, 0x76, 0x49, 0xb5, 0xf0, 0x2b, 0x7d, 0xd8, 0x65, 0xee, 0x6a, 0xb6, 0x0a, 0x64, 0xe3,
        0x16, 0x1c, 0xfa, 0x49, 0x29, 0x6f, 0x4a, 0x0f, 0xab, 0x2c, 0xbc, 0x33, 0x95, 0x6d, 0xcf, 0xc7, 0x0a, 0x7c,
        0x4a, 0x89, 0xbc, 0x2d, 0x53, 0x06, 0x84, 0xac, 0x7a, 0x29, 0x8f, 0xea, 0xed, 0x17, 0xbb, 0x11, 0xc3, 0x73,
        0x68, 0x4f, 0x42, 0xe7, 0x3a, 0xf6, 0x73, 0x16, 0x00, 0xa8, 0xb9, 0x03, 0x65, 0xb1, 0xb6, 0x37, 0x22, 0x0c,
        0xff, 0x54, 0x8a, 0xe5, 0xf4, 0xd0, 0xe9, 0xa9, 0x85, 0x4d, 0x17, 0x6c, 0x21, 0xad, 0x04, 0x72, 0x34, 0x11,
        0xfc, 0x35, 0x04, 0xac, 0x46, 0xc4, 0xa0, 0xe9, 0x9e, 0x1d, 0x65, 0x6f, 0xf5, 0xcb, 0xd1, 0xe3, 0x28, 0xcf,
        0x5b, 0xc3, 0x9f, 0xa8, 0x7a, 0x59, 0x94, 0xb6, 0xca, 0xbd, 0x32, 0x79, 0x72, 0x41, 0x57, 0xfb, 0x03, 0x21,
        0x4d, 0x2a, 0x6c, 0x7c
};

// context = iluminación_inteligente
static const uint8_t CONTEXT_ARRAY[] = {
        0x72, 0x68, 0x69, 0x6e, 0x6f, 0x33, 0x2e, 0x30, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x65, 0x73, 0x00, 0x09,
        0x00, 0x00, 0x00, 0x70, 0x69, 0x63, 0x6f, 0x76, 0x6f, 0x69, 0x63, 0x65, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x0c, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x61, 0x7a, 0x63, 0x6f,
        0x6e, 0x74, 0x65, 0x78, 0x74, 0x3a, 0x0a, 0x20, 0x20, 0x65, 0x78, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x6f,
        0x6e, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x43, 0x6f, 0x6c, 0x6f,
        0x72, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x68, 0x61, 0x7a, 0x20, 0x71, 0x75, 0x65,
        0x20, 0x6c, 0x61, 0x73, 0x20, 0x6c, 0x75, 0x63, 0x65, 0x73, 0x20, 0x73, 0x65, 0x61, 0x6e, 0x20, 0x24, 0x63,
        0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d,
        0x20, 0x63, 0x61, 0x6d, 0x62, 0x69, 0x61, 0x20, 0x6c, 0x61, 0x73, 0x20, 0x6c, 0x75, 0x63, 0x65, 0x73, 0x20,
        0x61, 0x20, 0x24, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x0a, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x2d, 0x20, 0x68, 0x61, 0x7a, 0x20, 0x71, 0x75, 0x65, 0x20, 0x5b, 0x6c, 0x61, 0x2c, 0x20,
        0x6c, 0x61, 0x73, 0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x7a, 0x2c, 0x20, 0x6c, 0x75, 0x63, 0x65, 0x73, 0x5d, 0x20,
        0x5b, 0x64, 0x65, 0x6c, 0x2c, 0x20, 0x64, 0x65, 0x20, 0x6c, 0x61, 0x2c, 0x20, 0x65, 0x6e, 0x20, 0x65, 0x6c,
        0x2c, 0x20, 0x65, 0x6e, 0x20, 0x6c, 0x61, 0x5d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x24,
        0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20,
        0x5b, 0x73, 0x65, 0x61, 0x2c, 0x20, 0x73, 0x65, 0x61, 0x6e, 0x5d, 0x20, 0x24, 0x63, 0x6f, 0x6c, 0x6f, 0x72,
        0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x63, 0x61, 0x6d,
        0x62, 0x69, 0x61, 0x20, 0x5b, 0x6c, 0x61, 0x2c, 0x20, 0x6c, 0x61, 0x73, 0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x7a,
        0x2c, 0x20, 0x6c, 0x75, 0x63, 0x65, 0x73, 0x5d, 0x20, 0x5b, 0x64, 0x65, 0x6c, 0x2c, 0x20, 0x64, 0x65, 0x20,
        0x6c, 0x61, 0x2c, 0x20, 0x65, 0x6e, 0x20, 0x65, 0x6c, 0x2c, 0x20, 0x65, 0x6e, 0x20, 0x6c, 0x61, 0x5d, 0x0a,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a,
        0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x61, 0x20, 0x24, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a,
        0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x68, 0x61, 0x7a, 0x20,
        0x71, 0x75, 0x65, 0x20, 0x5b, 0x73, 0x65, 0x61, 0x2c, 0x20, 0x73, 0x65, 0x61, 0x6e, 0x5d, 0x20, 0x24, 0x63,
        0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x6c, 0x61, 0x2c, 0x20, 0x6c, 0x61,
        0x73, 0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x7a, 0x2c, 0x20, 0x6c, 0x75, 0x63, 0x65, 0x73, 0x5d, 0x20, 0x5b, 0x64,
        0x65, 0x6c, 0x2c, 0x20, 0x64, 0x65, 0x20, 0x6c, 0x61, 0x2c, 0x20, 0x65, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x65, 0x6c, 0x2c, 0x20, 0x65, 0x6e, 0x20, 0x6c, 0x61, 0x5d, 0x20, 0x24, 0x6c, 0x6f,
        0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x63, 0x61, 0x6d, 0x62, 0x69, 0x61, 0x20, 0x61, 0x20, 0x24, 0x63, 0x6f,
        0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x6c, 0x61, 0x2c, 0x20, 0x6c, 0x61, 0x73,
        0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x7a, 0x2c, 0x20, 0x6c, 0x75, 0x63, 0x65, 0x73, 0x5d, 0x20, 0x5b, 0x64, 0x65,
        0x6c, 0x2c, 0x20, 0x64, 0x65, 0x20, 0x6c, 0x61, 0x2c, 0x20, 0x65, 0x6e, 0x20, 0x65, 0x6c, 0x2c, 0x20, 0x65,
        0x6e, 0x20, 0x6c, 0x61, 0x5d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x24, 0x6c, 0x6f, 0x63,
        0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x20, 0x20, 0x20,
        0x20, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x53, 0x74, 0x61, 0x74, 0x65, 0x3a,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x24, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x61,
        0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x28, 0x74, 0x6f, 0x64, 0x61, 0x73, 0x29, 0x20, 0x6c, 0x61, 0x73, 0x20,
        0x6c, 0x75, 0x63, 0x65, 0x73, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x24, 0x61, 0x63, 0x74,
        0x69, 0x6f, 0x6e, 0x3a, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x28, 0x6c, 0x61, 0x2c, 0x20, 0x6c, 0x61,
        0x73, 0x29, 0x20, 0x5b, 0x6c, 0x75, 0x7a, 0x2c, 0x20, 0x6c, 0x75, 0x63, 0x65, 0x73, 0x5d, 0x20, 0x5b, 0x64,
        0x65, 0x6c, 0x2c, 0x20, 0x64, 0x65, 0x20, 0x6c, 0x61, 0x2c, 0x20, 0x65, 0x6e, 0x20, 0x65, 0x6c, 0x2c, 0x20,
        0x65, 0x6e, 0x20, 0x6c, 0x61, 0x5d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x24, 0x6c, 0x6f,
        0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0a, 0x20, 0x20,
        0x73, 0x6c, 0x6f, 0x74, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x0a,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x61, 0x7a, 0x75, 0x6c, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x2d, 0x20, 0x76, 0x65, 0x72, 0x64, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x72,
        0x6f, 0x73, 0x61, 0x64, 0x6f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x6d, 0x6f, 0x72, 0x61,
        0x64, 0x6f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x72, 0x6f, 0x6a, 0x6f, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x62, 0x6c, 0x61, 0x6e, 0x63, 0x6f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x2d, 0x20, 0x61, 0x6d, 0x61, 0x72, 0x69, 0x6c, 0x6c, 0x6f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f,
        0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x62, 0x61,
        0xc3, 0xb1, 0x6f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x61, 0x72, 0x6d, 0x61, 0x72, 0x69,
        0x6f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x63, 0x6f, 0x63, 0x69, 0x6e, 0x61, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x73, 0x61, 0x6c, 0x61, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x2d, 0x20, 0x64, 0x65, 0x73, 0x70, 0x65, 0x6e, 0x73, 0x61, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d,
        0x20, 0x64, 0x6f, 0x72, 0x6d, 0x69, 0x74, 0x6f, 0x72, 0x69, 0x6f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x2d, 0x20, 0x68, 0x61, 0x62, 0x69, 0x74, 0x61, 0x63, 0x69, 0xc3, 0xb3, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x2d, 0x20, 0x70, 0x61, 0x73, 0x69, 0x6c, 0x6c, 0x6f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x61, 0x63,
        0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x65, 0x6e, 0x63, 0x69,
        0x65, 0x6e, 0x64, 0x61, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x61, 0x70, 0x61, 0x67, 0x61,
        0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
        0x17, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x2b, 0x00,
        0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00,
        0x4c, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x6c, 0x00,
        0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00,
        0x89, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0xa0, 0x00,
        0x00, 0x00, 0xa5, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0x00,
        0xba, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc6, 0x00, 0x00, 0x00, 0x61, 0x6d, 0x61, 0x72, 0x69, 0x6c,
        0x6c, 0x6f, 0x00, 0x61, 0x70, 0x61, 0x67, 0x61, 0x00, 0x61, 0x72, 0x6d, 0x61, 0x72, 0x69, 0x6f, 0x00, 0x61,
        0x7a, 0x75, 0x6c, 0x00, 0x61, 0x00, 0x62, 0x61, 0xc3, 0xb1, 0x6f, 0x00, 0x62, 0x6c, 0x61, 0x6e, 0x63, 0x6f,
        0x00, 0x63, 0x61, 0x6d, 0x62, 0x69, 0x61, 0x00, 0x63, 0x6f, 0x63, 0x69, 0x6e, 0x61, 0x00, 0x64, 0x65, 0x20,
        0x6c, 0x61, 0x00, 0x64, 0x65, 0x6c, 0x00, 0x64, 0x65, 0x73, 0x70, 0x65, 0x6e, 0x73, 0x61, 0x00, 0x64, 0x6f,
        0x72, 0x6d, 0x69, 0x74, 0x6f, 0x72, 0x69, 0x6f, 0x00, 0x65, 0x6e, 0x20, 0x65, 0x6c, 0x00, 0x65, 0x6e, 0x20,
        0x6c, 0x61, 0x00, 0x65, 0x6e, 0x63, 0x69, 0x65, 0x6e, 0x64, 0x61, 0x00, 0x68, 0x61, 0x62, 0x69, 0x74, 0x61,
        0x63, 0x69, 0xc3, 0xb3, 0x6e, 0x00, 0x68, 0x61, 0x7a, 0x00, 0x6c, 0x61, 0x73, 0x00, 0x6c, 0x61, 0x00, 0x6c,
        0x75, 0x63, 0x65, 0x73, 0x00, 0x6c, 0x75, 0x7a, 0x00, 0x6d, 0x6f, 0x72, 0x61, 0x64, 0x6f, 0x00, 0x70, 0x61,
        0x73, 0x69, 0x6c, 0x6c, 0x6f, 0x00, 0x71, 0x75, 0x65, 0x00, 0x72, 0x6f, 0x6a, 0x6f, 0x00, 0x72, 0x6f, 0x73,
        0x61, 0x64, 0x6f, 0x00, 0x73, 0x61, 0x6c, 0x61, 0x00, 0x73, 0x65, 0x61, 0x6e, 0x00, 0x73, 0x65, 0x61, 0x00,
        0x74, 0x6f, 0x64, 0x61, 0x73, 0x00, 0x76, 0x65, 0x72, 0x64, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00,
        0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00,
        0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00,
        0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
        0x1c, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x20, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
        0x17, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x28, 0x00,
        0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00,
        0x47, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x60, 0x00,
        0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00,
        0x6f, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x81, 0x00,
        0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00,
        0x97, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x01, 0x0b, 0x01, 0x1b, 0x07, 0x1c, 0x0d, 0x01, 0x0e, 0x01,
        0x18, 0x01, 0x01, 0x1b, 0x0b, 0x01, 0x1b, 0x08, 0x0d, 0x01, 0x20, 0x12, 0x0a, 0x01, 0x02, 0x01, 0x1a, 0x0d,
        0x02, 0x0a, 0x01, 0x17, 0x09, 0x0d, 0x09, 0x01, 0x0b, 0x02, 0x08, 0x01, 0x09, 0x0d, 0x20, 0x07, 0x0c, 0x01,
        0x03, 0x04, 0x0a, 0x01, 0x03, 0x04, 0x0a, 0x03, 0x04, 0x10, 0x0e, 0x04, 0x0c, 0x10, 0x01, 0x03, 0x0d, 0x1b,
        0x0b, 0x07, 0x11, 0x0d, 0x1b, 0x08, 0x0d, 0x04, 0x0c, 0x04, 0x0a, 0x04, 0x0c, 0x0a, 0x01, 0x04, 0x0c, 0x20,
        0x08, 0x04, 0x0c, 0x03, 0x01, 0x01, 0x1f, 0x07, 0x11, 0x01, 0x20, 0x08, 0x0d, 0x0c, 0x01, 0x20, 0x0a, 0x01,
        0x10, 0x0a, 0x01, 0x0a, 0x12, 0x20, 0x04, 0x10, 0x0a, 0x12, 0x20, 0x0b, 0x0d, 0x1b, 0x01, 0x16, 0x0d, 0x0e,
        0x01, 0x10, 0x07, 0x1c, 0x0d, 0x09, 0x04, 0x0f, 0x0d, 0x14, 0x0d, 0x0f, 0x0d, 0x10, 0x01, 0x16, 0x0d, 0x10,
        0x01, 0x0a, 0x01, 0x10, 0x04, 0x01, 0x0c, 0x10, 0x04, 0x01, 0x11, 0x0d, 0x16, 0x01, 0x10, 0x02, 0x04, 0x1b,
        0x16, 0x04, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
        0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x15, 0x00,
        0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
        0x1d, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
        0x16, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
        0x10, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
        0x1c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x00,
        0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
        0x15, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
        0x19, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1d, 0x00,
        0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00,
        0x22, 0x00, 0x00, 0x00, 0x61, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x6c,
        0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x16, 0x00,
        0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00,
        0x1b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x00,
        0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x61, 0x63, 0x74, 0x69,
        0x6f, 0x6e, 0x00, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65,
        0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x53,
        0x74, 0x61, 0x74, 0x65, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00,
        0xd0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x03, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x30, 0x00,
        0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
        0x4c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x74, 0x00,
        0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x88, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0xac, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00,
        0x0c, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x34, 0x01,
        0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x5c, 0x01, 0x00, 0x00,
        0x48, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x70, 0x01,
        0x00, 0x00, 0x5c, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x9c, 0x01,
        0x00, 0x00, 0xe8, 0x01, 0x00, 0x00, 0x5c, 0x02, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x9c, 0x01, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xc4, 0x01, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00,
        0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xd8, 0x01, 0x00, 0x00, 0xc4, 0x01,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00,
        0x0c, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0xe8, 0x01,
        0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00,
        0xfc, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x24, 0x02,
        0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x38, 0x02, 0x00, 0x00, 0x24, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0x4c, 0x02, 0x00, 0x00, 0x38, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0x70, 0x02, 0x00, 0x00, 0x5c, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x01, 0x00, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x70, 0x02, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x98, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xac, 0x02, 0x00, 0x00, 0x98, 0x02, 0x00, 0x00, 0x0b, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xc0, 0x02, 0x00, 0x00, 0xac, 0x02, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0xf0, 0x02, 0x00, 0x00, 0x28, 0x03, 0x00, 0x00,
        0x4c, 0x03, 0x00, 0x00, 0x98, 0x03, 0x00, 0x00, 0xd0, 0x02, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0xf0, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x18, 0x03, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x02, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x03, 0x00, 0x00, 0x28, 0x03, 0x00, 0x00, 0x07, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x02, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x4c, 0x03, 0x00, 0x00, 0x0d, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x74, 0x03, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00,
        0x0b, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x88, 0x03, 0x00, 0x00, 0x74, 0x03,
        0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x02, 0x00, 0x00,
        0x0d, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xac, 0x03, 0x00, 0x00, 0x98, 0x03,
        0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 0x00,
        0xac, 0x03, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00
};



#endif // PARAMS_H
    