// /Script/HairStrandsCore.GroomImportOptions
// Derives from: UObject
// size 0x50, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomImportOptions.h

UCLASS(Config=EditorPerProjectUserSettings)
class UGroomImportOptions : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FGroomConversionSettings ConversionSettings;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FHairGroupsInterpolation> InterpolationSettings;  // 0x0040, size 0x10
};
