// /Game/BP/UI/BP_LivingItemPreview.BP_LivingItemPreview_C
// Derives from: AActor > UObject
// size 0x580, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LivingItemPreview_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight1;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SpotlightAnchor;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight1;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ItemAttachPoint;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneCaptureComponent2D* SceneCaptureComponent2D;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* BaseMesh;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMeshComponent*> Submeshes;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x0288, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemData LivingItemData;  // 0x0478, size 0x90
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ULightComponent*, float> CachedInitialLightIntensites;  // 0x0508, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FadeInWeapon;  // 0x0558, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UStaticMesh>> PreloadedMeshesSoft;  // 0x0560, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> PreloadedMeshesHard;  // 0x0570, size 0x10

    UFUNCTION(BlueprintCallable) void AddSubmesh(const FMeshCustomisationData& MeshCustomisationData);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void ClearItemMesh();
    UFUNCTION() void ExecuteUbergraph_BP_LivingItemPreview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceMipLevels(bool ForceHighQuality);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B7AD42A935(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PreloadAttachmentMaterials();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupItem(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void UpdateCapture();
};
