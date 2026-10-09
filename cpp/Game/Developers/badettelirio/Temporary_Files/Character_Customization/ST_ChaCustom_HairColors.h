// /Game/Developers/badettelirio/Temporary_Files/Character_Customization/ST_ChaCustom_HairColors.ST_ChaCustom_HairColors
// size 0x48

USTRUCT()
struct ST_ChaCustom_HairColors
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ColorID;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ColorName;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ColorValue01;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ColorValue02;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Color01Spread;  // 0x0040, size 0x4
};
