// /Game/ASS/CHA/PHX/Customization/BPI_CHA_Head_Customization.BPI_CHA_Head_Customization_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPI_CHA_Head_Customization_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void Age_Update(FText Age);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void BS_ControlSelect(FText TopName, FText BottomName, FText LeftName, FText RightName, bool ResetMatrix_);  // parameters 0x61
    UFUNCTION(BlueprintCallable) void BS_MatrixToggle(bool TopEnabled, bool BottomEnabled, bool LeftEnabled, bool RightEnabled);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void BS_Update(float Top, float Bottom, float Left, float Right);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ComplexionTypeUpdate(int32 ComplexionID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void EyeColorUpdate(int32 EyeColorID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Gender_Update(bool Female, bool Male);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void HairColorUpdate(int32 HairColorID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HeadGetData(TArray<ST_ChaCustom_HairColors>& HairColorList, TArray<ST_ChaCustom_EyeColors>& EyeColorList, TArray<FName>& ComplexionType);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void HelmetToggle(bool Helmet, bool Hood, bool Rebreather);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void ScarUpdate(float ID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SkinColorUpdate(float Tone, float ToneBlend, float Hemoglobin);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Swap_Beard(int32 ID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Swap_Eyebrow(int32 ID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Swap_Hair(int32 HairStyleID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Swap_Piercing(int32 ID);  // parameters 0x4
};
