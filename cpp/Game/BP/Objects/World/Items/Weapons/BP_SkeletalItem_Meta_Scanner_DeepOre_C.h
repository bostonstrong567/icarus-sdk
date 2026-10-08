// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Meta_Scanner_DeepOre.BP_SkeletalItem_Meta_Scanner_DeepOre_C
// Derives from: ABP_SkeletalItem_Scanner_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Meta_Scanner_DeepOre_C : public ABP_SkeletalItem_Scanner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* ScreenWidget;  // 0x05B8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Meta_Scanner_DeepOre(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UWidgetComponent* GetScreenWidget();  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
