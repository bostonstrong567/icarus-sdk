// /Script/Strider.StridePivot
// size 0x60, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/StriderData.h

USTRUCT()
struct FStridePivot
{
public:
    UPROPERTY(EditAnywhere) FBoneReference Root;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) bool bProjectToGround;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere) float Offset;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) EStrideVectorMethod StrideVectorMethod;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) float Smoothing;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) bool bChooseNearestAxis;  // 0x0020, size 0x1
    float CurrentDirection;  // 0x0024, not reflected
    FTransform Transform;  // 0x0030, not reflected
};
