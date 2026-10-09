// /Script/Engine.ImportanceTexture
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Kismet/ImportanceSamplingLibrary.h

USTRUCT()
struct FImportanceTexture
{
public:
    UPROPERTY() FIntPoint Size;  // 0x0000, size 0x8
    UPROPERTY() int32 NumMips;  // 0x0008, size 0x4
    UPROPERTY() TArray<float> MarginalCDF;  // 0x0010, size 0x10
    UPROPERTY() TArray<float> ConditionalCDF;  // 0x0020, size 0x10
    UPROPERTY() TArray<FColor> TextureData;  // 0x0030, size 0x10
    UPROPERTY() TWeakObjectPtr<UTexture2D> Texture;  // 0x0040, size 0x8
    UPROPERTY() TEnumAsByte<EImportanceWeight> Weighting;  // 0x0048, size 0x1
};
