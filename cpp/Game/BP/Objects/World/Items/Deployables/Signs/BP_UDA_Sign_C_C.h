// /Game/BP/Objects/World/Items/Deployables/Signs/BP_UDA_Sign_C.BP_UDA_Sign_C_C
// Derives from: ABP_Sign_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_UDA_Sign_C_C : public ABP_Sign_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0798, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_UDA_Sign_C(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMaxCharacters(TArray<int32>& MaxCharacters) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSignWidgets(TArray<UUMG_Sign_Text_Display_C*>& Widgets) const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
