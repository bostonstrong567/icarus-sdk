// /Script/DragonIKPlugin.DragonData_FootData
// size 0x80, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FDragonData_FootData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Feet_Bone_Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Knee_Bone_Name;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Thigh_Bone_Name;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Feet_Rotation_Offset;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Fixed_Pole;  // 0x0024, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Knee_Direction_Offset;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Feet_Trace_Offset;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Front_Trace_Point_Spacing;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Side_Traces_Spacing;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Feet_Rotation_Limit;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Fixed_Foot_Height;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Feet_Heights;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Feet_Alpha;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Min_Feet_Extension;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Max_Feet_Extension;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Feet_Slope_Offset_Multiplier;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Max_Feet_Lift;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Overrided_Trace_Radius;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDragonData_FingerData> Finger_Array;  // 0x0070, size 0x10
};
