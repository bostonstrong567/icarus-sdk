// /Script/HairStrandsCore.GroomHairGroupsPreview
// Derives from: UObject
// size 0x38, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomImportOptions.h

UCLASS(Config=EditorPerProjectUserSettings)
class UGroomHairGroupsPreview : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) TArray<FGroomHairGroupPreview> Groups;  // 0x0028, size 0x10
};
