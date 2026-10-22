// /Game/BP/MiscConstructs/BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerCosmeticsFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void ApplyCosmeticsToPrimitive(UPrimitiveComponent* PrimitiveComponent, FCharacterCosmetics CosmeticData, UObject* __WorldContext);  // parameters 0x90
    UFUNCTION(BlueprintCallable) static void ApplyFaceShapesToPrimitive(UObject* MeshComp, const FCharacterCosmetics& Cosmetics, UObject* __WorldContext);  // parameters 0x90
    UFUNCTION(BlueprintCallable) static void ClearCosmeticMaterialOverride(UPrimitiveComponent* InPrimitive, UObject* __WorldContext);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void FaceBlendWeights(float Top, float Bottom, float Left, float Right, bool TopOn, bool BottomOn, bool LeftOn, bool RightOn, UObject* __WorldContext, float& TopWeight, float& BottomWeight, float& LeftWeight, float& RightWeight);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static void Find_Face_Morph(USkinnedMeshComponent* Mesh, FName HeadMorph, UObject* __WorldContext, FName& Morph);  // parameters 0x20, named "Find Face Morph"
    UFUNCTION(BlueprintCallable) static void FindFaceShapeKey(int32 NameHash, UObject* __WorldContext, FString& Key);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetFaceShapeData(FString Key, bool IsMale, UObject* __WorldContext, FName& HeadShapeName, UTexture*& Normal);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetFaceTagForArmourRow(FName RowName, UObject* __WorldContext, FName& Tag);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetMasterMaterial(UMaterialInterface* Material, UObject* __WorldContext, UMaterial*& Parent);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static void MakeCharacterCreationDataArray(FCharacterCosmetics CharacterCosmetics, UObject* __WorldContext, TArray<FCharacterCreationDataRowHandle>& OutData);  // parameters 0x98
    UFUNCTION(BlueprintCallable) static void UpdateSkinTone(float Tone, float Tint, float Saturation, UMaterialInstanceDynamic* MatHead, UObject* __WorldContext);  // parameters 0x20
};
