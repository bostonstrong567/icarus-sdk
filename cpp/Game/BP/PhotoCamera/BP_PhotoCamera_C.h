// /Game/BP/PhotoCamera/BP_PhotoCamera.BP_PhotoCamera_C
// Derives from: ACharacter > APawn > AActor > UObject
// size 0x524, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_PhotoCamera_C : public ACharacter
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* FocalCube;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpringArmComponent* SpringArm;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwnerCharacter;  // 0x04E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool KeepRelativeControllerRotation;  // 0x04F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MaintainHeight;  // 0x04F1, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool LookAtPlayer;  // 0x04F2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LookAtPlayerOffset;  // 0x04F4, size 0xC
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_PhotoUI_C* PhotoCameraUI;  // 0x0500, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ResolutionMultiplier;  // 0x0508, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistanceToPlayer;  // 0x050C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float VerticalInputAxis;  // 0x0510, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float SprintSpeedMultiplier;  // 0x0514, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseCameraSpeed;  // 0x0518, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseMaxPlayerDistance;  // 0x051C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WereControlsVisibleBeforeHidingUI;  // 0x051D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PendingScrollInput;  // 0x0520, size 0x4

    UFUNCTION(BlueprintCallable) void AddPendingScrollInput(float Input);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ApplyPendingScrollInput(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void BindToUIEvents();
    UFUNCTION(BlueprintCallable) void CameraLagChanged(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CameraSpeedChanged(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CanMoveInDirection(FVector InputDirection, float InputScale, bool& CanMove);  // parameters 0x11
    UFUNCTION(BlueprintCallable, Client, Reliable) void ClientPossessed();
    UFUNCTION(BlueprintCallable, Client, Reliable) void ClientUnpossessed();
    UFUNCTION() void ExecuteUbergraph_BP_PhotoCamera(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FOVChanged(float Value);  // parameters 0x4
    UFUNCTION() void InpActEvt_Crouch_K2Node_InputActionEvent_5(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Crouch_K2Node_InputActionEvent_6(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HideUI_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HotbarBack_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HotbarForward_K2Node_InputActionEvent_2(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Interact_K2Node_InputActionEvent_9(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Jump_K2Node_InputActionEvent_7(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Jump_K2Node_InputActionEvent_8(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_LeftAlt_K2Node_InputKeyEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_3(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_4(FKey Key);  // parameters 0x18
    UFUNCTION() void InpAxisEvt_LookRight_K2Node_InputAxisEvent_1(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LookAtPlayerChanged(bool bIsChecked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MaintainHeightChanged(bool bIsChecked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ManuallyToggleControls();
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossessed(AController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUnpossessed(AController* OldController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ResolutionMultiplierChanged(float Multiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerSetFlySpeed(float FlySpeed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFlySpeed(float FlySpeed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SettingsUpdated(FPostProcessSettings Settings);  // parameters 0x560
};
