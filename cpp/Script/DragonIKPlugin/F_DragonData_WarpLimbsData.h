// /Script/DragonIKPlugin.DragonData_WarpLimbsData
// size 0x2C, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/DragonIK_Library.h

USTRUCT()
struct FDragonData_WarpLimbsData
{
public:
    UPROPERTY(EditAnywhere) FName Foot_Bone_Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FName Knee_Bone_Name;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) FName Thigh_Bone_Name;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) float Warp_Lift_Reference_Location;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) float Warp_Param_Adder;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) FVector2D Min_Max_Warp;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere) float max_extra_compression_height;  // 0x0028, size 0x4
};
