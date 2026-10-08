// /Game/BP/Objects/BP_SeatBase.BP_SeatBase_C
// Derives from: ASeatBase > AIcarusActor > AActor > UObject
// size 0x378, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SeatBase_C : public ASeatBase, public IISeatAudioInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ExitLocators;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SeatMesh;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusCameraSpringArm* IcarusCameraSpringArm;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UAnimInstance> SeatedAnimClass_TP;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TPViewTarget;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UAnimInstance> SeatedAnimClass_FP;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FPMeshOffset;  // 0x0340, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FPCameraOffset;  // 0x034C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator SeatRotationFrame;  // 0x0358, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool KeepRelativeControllerRotation;  // 0x0364, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InteractableEnabled;  // 0x0365, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsThirdPerson;  // 0x0366, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float CameraOffsetLength;  // 0x0368, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ExitLocatorOffset;  // 0x036C, size 0xC

    UFUNCTION(BlueprintImplementableEvent) void AttachPlayerToSeat(AIcarusPlayerCharacter* PlayerCharacter, const FRotator& EnterRotation);  // parameters 0x14
    UFUNCTION(BlueprintImplementableEvent) void DetachPlayerFromSeat(AIcarusPlayerCharacter* PlayerCharacter, const FVector& ExitLocation, const FRotator& ExitRotation, bool bChangeSeat);  // parameters 0x21
    UFUNCTION() void ExecuteUbergraph_BP_SeatBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool FindExit(FVector& OutExitLocation, FRotator& OutExitRotation);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void GetAudioSeatType(TEnumAsByte<EAudioSeatType>& Type);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FRotator GetSeatedPlayerControlRotation() const;  // parameters 0xC
    UFUNCTION() void InpActEvt_Interact_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpAxisEvt_LookRight_K2Node_InputAxisEvent_1(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsLocalPlayerSeated(bool& IsLocallyControlled);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnAttachedPlayerDestroyed(AActor* DestroyedAttachedPlayer);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnRep_AttachedPlayer();
    UFUNCTION(BlueprintCallable) void OnRep_CameraOffsetLength();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerInteract();
    UFUNCTION(BlueprintCallable) void UpdateCameraPerspective();
    UFUNCTION(BlueprintCallable) void UpdatePlayerEffectsOwner(USceneComponent* OwnerComponent, AIcarusPlayerCharacter* OptionalOwningPlayer);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateSeatedControllerRotation();
    UFUNCTION(BlueprintCallable) void UpdateViewTarget(float BlendTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
