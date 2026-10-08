// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Sandwyrm_Chainsaw.BP_SkeletalItem_Sandwyrm_Chainsaw_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Sandwyrm_Chainsaw_C : public ASkeletalItem, public IIFireTransformProvider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Arrow;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* AudioIdleLoop;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Is_On;  // 0x0598, size 0x1, named "Is On"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* ItemOwner;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) ULivingItemComponent* Living_Item;  // 0x05A8, size 0x8, named "Living Item"
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool SawbladeShowing;  // 0x05B0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* AmmoController;  // 0x05B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* AnimMontageFP;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* AnimMontageTP;  // 0x05C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OldOn;  // 0x05D0, size 0x1

    UFUNCTION(BlueprintCallable) void DynamicDataUpdate();
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Sandwyrm_Chainsaw(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFireTransform(bool& Success, FTransform& FireTransform);  // parameters 0x40
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnRep_Is_On();  // named "OnRep_Is On"
    UFUNCTION(BlueprintCallable) void OnRep_SawbladeShowing();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void StatContainerUpdated();
    UFUNCTION(BlueprintCallable) void WeaponFired();
    UFUNCTION(BlueprintCallable) void WeaponReloaded();
};
