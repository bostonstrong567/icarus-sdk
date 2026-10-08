// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Radiation_Tracker.BP_SkeletalItem_Radiation_Tracker_C
// Derives from: ABP_SkeletalItem_Scanner_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Radiation_Tracker_C : public ABP_SkeletalItem_Scanner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ScanningBeepAudio;  // 0x05B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* ScreenWidget;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NewVar_0;  // 0x05C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance Event_Instance;  // 0x05D0, size 0x8, named "Event Instance"

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Radiation_Tracker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UWidgetComponent* GetScreenWidget();  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ScanAudio();
};
