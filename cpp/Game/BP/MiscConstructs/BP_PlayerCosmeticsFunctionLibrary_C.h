// /Game/BP/MiscConstructs/BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerCosmeticsFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void ApplyCosmeticsToPrimitive(UPrimitiveComponent* PrimitiveComponent, FCharacterCosmetics CosmeticData, UObject* __WorldContext);  // parameters 0x70
    UFUNCTION(BlueprintCallable) static void ClearCosmeticMaterialOverride(UPrimitiveComponent* InPrimitive, UObject* __WorldContext);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetMasterMaterial(UMaterialInterface* Material, UObject* __WorldContext, UMaterial*& Parent);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MakeCharacterCreationDataArray(FCharacterCosmetics CharacterCosmetics, UObject* __WorldContext, TArray<FCharacterCreationDataRowHandle>& OutData);  // parameters 0x78
    UFUNCTION(BlueprintCallable) static void UpdateSkinTone(float Tone, float Tint, float Saturation, UMaterialInstanceDynamic* MatHead, UObject* __WorldContext);  // parameters 0x20
};
