// /Game/UI/Components/UMG_GameMessageContainer.UMG_GameMessageContainer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GameMessageContainer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BlinkAll;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MessageContainer;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Water;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Health;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Food;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Oxygen;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Exposure;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance Sound;  // 0x0290, size 0x8

    UFUNCTION(BlueprintCallable) void AddMessage(bool Error, FText Message, float LifetimeOverride);  // parameters 0x24
    UFUNCTION() void ExecuteUbergraph_UMG_GameMessageContainer(int32 EntryPoint);  // parameters 0x4
};
