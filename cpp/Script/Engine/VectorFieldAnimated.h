// /Script/Engine.VectorFieldAnimated
// Derives from: UVectorField > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/VectorField/VectorFieldAnimated.h

UCLASS(MinimalAPI)
class UVectorFieldAnimated : public UVectorField
{
public:
    UPROPERTY(EditAnywhere) UTexture2D* Texture;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<EVectorFieldConstructionOp> ConstructionOp;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere) int32 VolumeSizeX;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) int32 VolumeSizeY;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) int32 VolumeSizeZ;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere) int32 SubImagesX;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) int32 SubImagesY;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere) int32 FrameCount;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) float FramesPerSecond;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bLoop : 1;  // 0x0070, mask 0x01
    UPROPERTY(EditAnywhere) UVectorFieldStatic* NoiseField;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere) float NoiseScale;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) float NoiseMax;  // 0x0084, size 0x4
};
