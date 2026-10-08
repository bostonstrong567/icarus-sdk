// /Script/HairStrandsCore.GroomCreateFollicleMaskOptions
// Derives from: UObject
// size 0x40, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomCreateFollicleMaskOptions.h

UCLASS(Config=EditorPerProjectUserSettings)
class UGroomCreateFollicleMaskOptions : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Resolution;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RootRadius;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFollicleMaskOptions> Grooms;  // 0x0030, size 0x10
};
