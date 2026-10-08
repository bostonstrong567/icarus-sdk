// /Game/BP/UI/InventoryPlayer/BP_PlayerPreview_HAB.BP_PlayerPreview_HAB_C
// Derives from: ABP_PlayerPreview_C > ABP_ActorPreview_C > AActor > UObject
// size 0x354, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PlayerPreview_HAB_C : public ABP_PlayerPreview_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDirectionalLightComponent* Light_Bottom;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* Light_Rim;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* Light_Fill_R;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* Light_Fill_L;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Light_Key;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Light_Fill_Blue;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float testIntensity;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool switch;  // 0x034C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NewVar_0_0;  // 0x0350, size 0x4

    UFUNCTION(BlueprintCallable) void CharacterDataUpdated(FCharacterCosmetics CharacterData);  // parameters 0x80
    UFUNCTION(BlueprintCallable) void CharacterUpdated(FOnlineProfileCharacter Character);  // parameters 0xF0
    UFUNCTION(BlueprintCallable) void ClearCurrentMeshes();
    UFUNCTION(BlueprintCallable) void ConstructPlayerMeshArray(TArray<USkeletalMesh*>& MeshArray, TArray<TSoftClassPtr<UAnimInstance>>& MeshAnimBPs, USkeletalMesh*& BodyMesh, TArray<FName>& MeshTags);  // parameters 0x38
    UFUNCTION() void ExecuteUbergraph_BP_PlayerPreview_HAB(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetLightComponents(TArray<ULightComponent*>& SceneCaptureLights, TArray<ULightComponent*>& CameraComponentLights);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCaptureMode(bool UseSceneCapture, bool UseCameraComponent);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void intensity();
};
