// /Script/Icarus.CharacterCreationData
// size 0x140, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/CharacterCreationDataLibrary.generated.h

USTRUCT()
struct FCharacterCreationData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECharacterOptionCategory Category;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECharacterBodyType BodyType;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0038, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Item;  // 0x0060, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ItemHelmetVariant;  // 0x0078, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FColor> Color;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScalarParamValue;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> TextureParamValue;  // 0x00A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSoftObjectPtr<UMaterialInterface>, TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;  // 0x00D0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEnabled;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle RequiredPackageID;  // 0x0124, size 0x18
};
