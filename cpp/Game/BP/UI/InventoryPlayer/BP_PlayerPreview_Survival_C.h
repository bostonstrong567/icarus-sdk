// /Game/BP/UI/InventoryPlayer/BP_PlayerPreview_Survival.BP_PlayerPreview_Survival_C
// Derives from: ABP_PlayerPreview_C > ABP_ActorPreview_C > AActor > UObject
// size 0x310, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PlayerPreview_Survival_C : public ABP_PlayerPreview_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight3;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight1;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UMainInventoryWidgetBase* InventoryWidget;  // 0x0308, size 0x8

    UFUNCTION(BlueprintCallable) void ConstructPlayerMeshArray(TArray<USkeletalMesh*>& MeshArray, TArray<TSoftClassPtr<UAnimInstance>>& MeshAnimBPs, USkeletalMesh*& BodyMesh, TArray<FName>& MeshTags);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void On_Connected_Player_Initialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38, named "On Connected Player Initialised"
    UFUNCTION(BlueprintCallable) void RefreshPlayerCosmetics();
    UFUNCTION(BlueprintCallable, BlueprintPure) void ResolveVisibility(bool& Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPlayer(AIcarusPlayerCharacter* InPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdatePreviewVisibility();
};
