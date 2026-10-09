// /Script/HairStrandsCore.HairLODSettings
// size 0x18, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetInterpolation.h

USTRUCT()
struct FHairLODSettings
{
public:
    UPROPERTY(EditAnywhere) float CurveDecimation;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float VertexDecimation;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float AngularThreshold;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float ScreenSize;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float ThicknessScale;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) bool bVisible;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere) EGroomGeometryType GeometryType;  // 0x0015, size 0x1
};
