// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C
// Derives from: ABP_SkeletalItem_Scanner_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Meta_Fishfinder_C : public ABP_SkeletalItem_Scanner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* ScreenWidget;  // 0x05B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Meta_Fishfinder(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UWidgetComponent* GetScreenWidget();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Play_Fish_Finder_Finish_Sound();  // named "Play Fish Finder Finish Sound"
    UFUNCTION(BlueprintCallable) void Play_Sonar_Sound();  // named "Play Sonar Sound"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
