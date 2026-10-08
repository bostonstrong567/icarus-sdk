// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Scanner_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY() float Blinker_LightIntensity_C4C74377490DA379A11DCB8BF8DFCB80;  // 0x0588, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Blinker__Direction_C4C74377490DA379A11DCB8BF8DFCB80;  // 0x058C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Blinker;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Scanner_C* ScannerActionable;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EnableAudioBeep;  // 0x05A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x05A8, size 0x8

    UFUNCTION() void Blinker__Audio__EventFunc();
    UFUNCTION() void Blinker__FinishedFunc();
    UFUNCTION() void Blinker__UpdateFunc();
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Scanner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UWidgetComponent* GetScreenWidget();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsScannerActive();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PlayAudioBeep();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateLightMaterial(float Intensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ViewModeChanged(bool bIsThirdPerson);  // parameters 0x1
};
