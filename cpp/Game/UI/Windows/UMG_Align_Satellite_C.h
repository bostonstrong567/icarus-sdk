// /Game/UI/Windows/UMG_Align_Satellite.UMG_Align_Satellite_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x360, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Align_Satellite_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Arrow;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Center;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Circle;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HB_Time;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Left;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Line1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Line2;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* OuterCircle;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Progress;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Right;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatusText;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* Target;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_TimeDisplay;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TrackCone;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* UMG_CloseButton_2;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame_104;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Player_Speed;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Player_Remainder;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Colonist_Degrees;  // 0x0310, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Colonist_Speed;  // 0x0314, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Colonist_Target;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ColonistHasReachedTarget;  // 0x031C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Progress_Value;  // 0x0320, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Progress_Temp;  // 0x0324, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TempValue;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Player_Degrees;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AcceptableDistance;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float In_Delta_Time;  // 0x0334, size 0x4, named "In Delta Time"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Progress_Speed;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance MinigameAudio;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Completed;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InputRight;  // 0x0349, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InputLeft;  // 0x034A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDateTime MiniGameStartTime;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDateTime MiniGameEndTime;  // 0x0358, size 0x8

    UFUNCTION(BlueprintCallable) void ColonistReachedLocation();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_Align_Satellite(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FArcadeMachineScore GetArcadeMachineScore();  // parameters 0x30
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void OnMiniGameCompleted();
    UFUNCTION(BlueprintCallable) void SetDegrees(int32 NewDegrees);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SubmitArcadeMachineScore(ABP_Colony_Arcade_Machine_C* InputPin);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateArcadeMachineTime();
};
