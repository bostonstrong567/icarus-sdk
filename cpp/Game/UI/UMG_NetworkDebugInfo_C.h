// /Game/UI/UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_NetworkDebugInfo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BackupHost;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BackupHostName;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FailedUpdateStatus;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HeartbeatStatus;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HostName;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PingNumber;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SaveStatus;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ServerFPS;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ServerFPSText;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TimerHandle;  // 0x02C0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_NetworkDebugInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NetworkDebugInfo(FNetworkingStatus DebugInfo, bool Enabled);  // parameters 0x61
    UFUNCTION(BlueprintCallable) void StartTracking();
    UFUNCTION(BlueprintCallable) void StopTracking();
    UFUNCTION(BlueprintCallable) void TimerFired();
    UFUNCTION(BlueprintCallable) void UpdateServerFPS();
};
