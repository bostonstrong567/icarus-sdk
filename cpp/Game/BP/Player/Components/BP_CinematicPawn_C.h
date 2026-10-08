// /Game/BP/Player/Components/BP_CinematicPawn.BP_CinematicPawn_C
// Derives from: AIcarusSpectatorPawn > ASpectatorPawn > ADefaultPawn > APawn > AActor > UObject
// size 0x338, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ABP_CinematicPawn_C : public AIcarusSpectatorPawn, public IICameraInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* CameraLocation;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpringArmComponent* SpringArm;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* ChildActor;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpeedMultiplier;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DepthOfFieldSpeed;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FastMoving;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentFOV;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultFOVSpeed;  // 0x0310, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IncreaseFOV;  // 0x0314, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DecreaseFOV;  // 0x0315, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LocalSpectator;  // 0x0316, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FToggleHelpScreen ToggleHelpScreen;  // 0x0318, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MoveUpAxis;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Jumping;  // 0x032C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Crouching;  // 0x032D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MoveSpeedPressed;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TriggerMoveSpeedRate;  // 0x0334, size 0x4

    UFUNCTION(BlueprintCallable) void ChangePreset(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DecreaseSpeed();
    UFUNCTION() void ExecuteUbergraph_BP_CinematicPawn(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void IncreaseSpeed();
    UFUNCTION() void InpActEvt_Crouch_K2Node_InputActionEvent_4(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Crouch_K2Node_InputActionEvent_5(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_FreeLook_K2Node_InputActionEvent_8(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar0_K2Node_InputActionEvent_9(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar1_K2Node_InputActionEvent_16(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar2_K2Node_InputActionEvent_15(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar3_K2Node_InputActionEvent_14(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar4_K2Node_InputActionEvent_13(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar5_K2Node_InputActionEvent_12(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar6_K2Node_InputActionEvent_11(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar7_K2Node_InputActionEvent_10(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HotbarBack_K2Node_InputActionEvent_3(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HotbarForward_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Jump_K2Node_InputActionEvent_6(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Jump_K2Node_InputActionEvent_7(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_NumPadFive_K2Node_InputKeyEvent_8(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_NumPadFive_K2Node_InputKeyEvent_9(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_NumPadFour_K2Node_InputKeyEvent_5(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_NumPadOne_K2Node_InputKeyEvent_4(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_NumPadSix_K2Node_InputKeyEvent_6(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_NumPadSix_K2Node_InputKeyEvent_7(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_2(FKey Key);  // parameters 0x18
    UFUNCTION() void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDestroyed();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResetFOV();
    UFUNCTION(BlueprintCallable, Server, Reliable) void SERVER_MovePawn(FVector_NetQuantize Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void TickVisuals();
    UFUNCTION(BlueprintCallable) void ToggleHelpScreen__DelegateSignature();
    UFUNCTION(BlueprintCallable) void UpdateCamera(FVector InLocation, FRotator InRotation, float InFOV, bool ForceUpdate, FVector& OutLocation, FRotator& OutRotation, float& OutFOV, bool& Return);  // parameters 0x3D
    UFUNCTION(BlueprintCallable) void UpdateFlySpeed();
};
