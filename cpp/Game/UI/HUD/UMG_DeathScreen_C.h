// /Game/UI/HUD/UMG_DeathScreen.UMG_DeathScreen_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DeathScreen_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* HoldFKeybind;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* HoldRespawnRetainer;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* MissionTimer;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* NextPlayer;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PlayerName;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* PrevPlayer;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RespawnCountRetainer;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RespawnCountText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* respawntext;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* TitleRetainer;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_GiveUp;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Chatbox_C* UMG_Chatbox;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusCompassWidget_C* UMG_IcarusCompassWidget;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionTimer_C* UMG_MissionTimer;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RespawnTimer;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle Timer;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RespawnsRemaining;  // 0x02F0, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_DeathScreen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResetRespawnButton();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateRespawnText();
};
