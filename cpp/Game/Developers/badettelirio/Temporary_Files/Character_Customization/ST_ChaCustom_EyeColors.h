// /Game/Developers/badettelirio/Temporary_Files/Character_Customization/ST_ChaCustom_EyeColors.ST_ChaCustom_EyeColors
// size 0x58

USTRUCT()
struct ST_ChaCustom_EyeColors
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ColorID;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ColorName;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ColorValue01;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UMaterialInstance> MaterialInstance;  // 0x0030, size 0x28
};
