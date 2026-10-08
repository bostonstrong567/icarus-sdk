// /Game/BP/UI/InventoryPlayer/BP_Character_Preview.BP_Character_Preview_C
// Derives from: ABP_PlayerPreview_HAB_C > ABP_PlayerPreview_C > ABP_ActorPreview_C > AActor > UObject
// size 0x8D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Character_Preview_C : public ABP_PlayerPreview_HAB_C, public IBPI_CHA_Head_Customization_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CHA_Head_01;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CHA_Rebreather;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CHA_Human_Hood;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CHA_Helmet;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CHA_Human_Hair;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CHA_Human_Eyebrow;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CHA_Human_Piercings;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_CHA_Human_Beard;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BS_Top;  // 0x0380, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BS_Bottom;  // 0x0384, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BS_Left;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BS_Right;  // 0x038C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<USkeletalMesh*, USkeletalMesh*> Male_HairStyles;  // 0x0390, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<USkeletalMesh*, USkeletalMesh*> Male_BeardStyles;  // 0x03E0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Mat_Head;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Skin_Tone;  // 0x0438, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, UTexture*> BS_Male_Normals;  // 0x0440, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FName> BS_Male_Head;  // 0x0490, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Left_Head;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Bot_Head;  // 0x04E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Right_Head;  // 0x04F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Top_Head;  // 0x04F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Top_Eyebrows;  // 0x0500, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Right_Eyebrows;  // 0x0508, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Bot_Eyebrows;  // 0x0510, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Left_Eyebrows;  // 0x0518, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FName> BS_Female_Head;  // 0x0520, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Top_Hair;  // 0x0570, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Right_Hair;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Bot_Hair;  // 0x0580, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Left_Hair;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Top_Beard;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Right_Beard;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Bot_Beard;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Left_Beard;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMesh*> Male_EyebrowStyles;  // 0x05B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMesh*> Male_PiercingStyles;  // 0x05C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Top_Piercing;  // 0x05D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Right_Piercing;  // 0x05D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Bot_Piercing;  // 0x05E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Left_Piercing;  // 0x05E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Bot_Rebreather;  // 0x05F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Left_Rebreather;  // 0x05F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Right_Rebreather;  // 0x0600, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MorphName_Top_Rebreather;  // 0x0608, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, UTexture*> Texture_AgeNormalMap;  // 0x0610, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFemale;  // 0x0660, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, UTexture*> BS_Female_Normals;  // 0x0668, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Matrix_Top;  // 0x06B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Matrix_Bottom;  // 0x06D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Matrix_Left;  // 0x06E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Matrix_Right;  // 0x0700, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<USkeletalMesh*, USkeletalMesh*> Female_HairStyles;  // 0x0718, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<USkeletalMesh*, USkeletalMesh*> Female_BeardStyles;  // 0x0768, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMesh*> Female_EyebrowStyles;  // 0x07B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMesh*> Female_PiercingStyles;  // 0x07C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ID_Piercing;  // 0x07D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ID_Eyebrow;  // 0x07DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ID_Hair;  // 0x07E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ID_Beard;  // 0x07E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ST_ChaCustom_HairColors> HairColors;  // 0x07E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ST_ChaCustom_EyeColors> EyeColors;  // 0x07F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, UTexture*> Complexion_Type;  // 0x0808, size 0x50, named "Complexion Type"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HelmetOn;  // 0x0858, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HoodOn;  // 0x0859, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RebreatherOn;  // 0x085A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> PlayerMaterialsV2;  // 0x0860, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* HeadMesh;  // 0x0870, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* EyebrowsMesh;  // 0x0878, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* PiercingMesh;  // 0x0880, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* BodyMesh;  // 0x0888, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* HairMesh;  // 0x0890, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* FacialHairMesh;  // 0x0898, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TopMatrixEnabled;  // 0x08A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BottomMatrixEnabled;  // 0x08A1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LeftMatrixEnabled;  // 0x08A2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RightMatrixEnabled;  // 0x08A3, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UWB_Cha_TempDebug_C* UIDebugTemp;  // 0x08A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugUI;  // 0x08B0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* RebreatherMesh;  // 0x08B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* HoodMesh;  // 0x08C0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* HelmetMesh;  // 0x08C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MaleSelected;  // 0x08D0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void AffectedMeshW_Helmet(USkeletalMesh*& Hair, USkeletalMesh*& Beard);  // parameters 0x10, named "AffectedMeshW Helmet"
    UFUNCTION(BlueprintCallable) void Age_Update(FText Age);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void BS_ControlSelect(FText TopName, FText BottomName, FText LeftName, FText RightName, bool ResetMatrix_);  // parameters 0x61
    UFUNCTION(BlueprintCallable) void BS_MatrixToggle(bool TopEnabled, bool BottomEnabled, bool LeftEnabled, bool RightEnabled);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void BS_Update(float Top, float Bottom, float Left, float Right);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void BlendshapeUpdate(float Top, float Bottom, float Right, float Left);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void BlenshapeAccessoriesUpdates();
    UFUNCTION(BlueprintCallable) void BlenshapeReset(bool Reset);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CachedBSControlSelect();
    UFUNCTION(BlueprintCallable) void ComplexionTypeUpdate(int32 ComplexionID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ConstructPlayerMeshArray(TArray<USkeletalMesh*>& MeshArray, TArray<TSoftClassPtr<UAnimInstance>>& MeshAnimBPs, USkeletalMesh*& BodyMesh, TArray<FName>& MeshTags);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void Dynamic_Materials_Setup(bool Update_);  // parameters 0x1, named "Dynamic Materials Setup"
    UFUNCTION() void ExecuteUbergraph_BP_Character_Preview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void EyeColorUpdate(int32 EyeColorID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Gender_Update(bool Female, bool Male);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void HairColorUpdate(int32 HairColorID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HeadAndNormalsUpdate(const FText& Top, const FText& Bottom, const FText& Left, const FText& Right);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void HeadGetData(TArray<ST_ChaCustom_HairColors>& HairColorList, TArray<ST_ChaCustom_EyeColors>& EyeColorList, TArray<FName>& ComplexionType);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void HelmetToggle(bool Helmet, bool Hood, bool Rebreather);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void InitializeDefaults();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void ResolveVisibility(bool& Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ScarUpdate(float ID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SkinColorUpdate(float Tone, float ToneBlend, float Hemoglobin);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SkinUpdate(float Slider_Tone, float Slider_ToneBlend, float Slider_Hemoglobin);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Swap_Beard(int32 ID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Swap_Eyebrow(int32 ID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Swap_Hair(int32 HairStyleID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Swap_Piercing(int32 ID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdatePlayerMeshes(bool Force);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
