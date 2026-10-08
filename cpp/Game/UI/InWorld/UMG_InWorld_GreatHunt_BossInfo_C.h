// /Game/UI/InWorld/UMG_InWorld_GreatHunt_BossInfo.UMG_InWorld_GreatHunt_BossInfo_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x390, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InWorld_GreatHunt_BossInfo_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Background;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_93;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Timer;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NameBorder;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Number;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RespawnBar;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* RespawnInfo;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RespawnText;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RespawnText_Returns;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* ScrollBox_165;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Unavailable;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWorldBossesRowHandle Boss;  // 0x0308, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLC_Data;  // 0x0320, size 0x18, named "DLC Data"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FWorldBossesRowHandle, TSoftObjectPtr<UTexture2D>> BossToImage;  // 0x0338, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Mission_Communication_Upgradeable_C* Communicator;  // 0x0388, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_InWorld_GreatHunt_BossInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBoss(FWorldBossesRowHandle Boss);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void TryInitialise();
    UFUNCTION(BlueprintCallable) void UpdateTimer();
};
