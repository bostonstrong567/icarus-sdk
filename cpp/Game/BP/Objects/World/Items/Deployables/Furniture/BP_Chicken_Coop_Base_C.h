// /Game/BP/Objects/World/Items/Deployables/Furniture/BP_Chicken_Coop_Base.BP_Chicken_Coop_Base_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7D8, a blueprint class, blueprint

UCLASS(Abstract, Config=Engine)
class ABP_Chicken_Coop_Base_C : public ABP_DeployableContainerBase_C, public IIcarusNavLinkController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavLinkExitEnd;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavLinkExitStart;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavLinkEntryEnd;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavLinkEntryStart;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Nests;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Nest_09;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Nest_08;  // 0x0790, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Nest_06;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Nest_05;  // 0x07A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Nest_03;  // 0x07A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Nest_02;  // 0x07B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Nest_01;  // 0x07B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NavModifierUID;  // 0x07C0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusNavLinkCustomComponent* EntryNavLink;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusNavLinkCustomComponent* ExitNavLink;  // 0x07D0, size 0x8

    UFUNCTION(BlueprintCallable) void CheckReachable();
    UFUNCTION() void ExecuteUbergraph_BP_Chicken_Coop_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsLinkPathfindingAllowed(UObject* Querier) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
};
