// /Script/DragonIKPlugin.DragonData_ArmsData
// size 0x11C, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FDragonData_ArmsData
{
public:
    UPROPERTY(EditAnywhere) FBoneReference Clavicle_Bone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference Shoulder_Bone_Name;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference Elbow_Bone_Name;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference Hand_Bone_Name;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) bool is_this_right_hand;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere) bool invert_lower_twist;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere) bool invert_upper_twist;  // 0x0042, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Local_Direction_Axis;  // 0x0044, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Arm_Aiming_Offset;  // 0x0050, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool accurate_hand_rotation;  // 0x005C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool relative_axis;  // 0x005D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Maximum_Extension;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Minimum_Extension;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Max_Stretch_Ratio;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Stretch_lower_arm_Priorty;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Elbow_Pole_Offset;  // 0x0070, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector North_Pole_Offset;  // 0x007C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector South_Pole_Offset;  // 0x0088, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector West_Pole_Offset;  // 0x0094, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector East_Pole_Offset;  // 0x00A0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool override_limits;  // 0x00AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Max_Arm_H_Angle;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Max_Arm_V_Angle;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Inner_Clavicle_Side_Limit;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Inner_Clavicle_Vertical_Limit;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Outer_Clavicle_Side_Limit;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Outer_Clavicle_Vertical_Limit;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Shoulder_Inner_Clamp;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Shoulder_Outer_Clamp;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ForeArm_Angle_Limit;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Twist_Offset_Reverse;  // 0x00F8, size 0x4
    float last_shoulder_angle;  // 0x00FC, not reflected
    float last_forarm_angle;  // 0x0100, not reflected
    FRotator last_clavicle_rotation;  // 0x0104, not reflected
    FRotator last_hand_rotation;  // 0x0110, not reflected
};
