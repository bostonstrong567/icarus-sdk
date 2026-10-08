// /Game/BP/UI/Talents/Prospects/UMG_MissionLockedTimer.UMG_MissionLockedTimer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionLockedTimer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_2;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_3;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Mission;  // 0x0298, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Unlock_Time_Seconds;  // 0x02B0, size 0x4, named "Unlock Time Seconds"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastUpdateTime;  // 0x02B4, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionLockedTimer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetMissionUnlockTime(int32& UnlockTimeSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
