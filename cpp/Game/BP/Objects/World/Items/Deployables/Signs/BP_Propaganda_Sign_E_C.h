// /Game/BP/Objects/World/Items/Deployables/Signs/BP_Propaganda_Sign_E.BP_Propaganda_Sign_E_C
// Derives from: ABP_Sign_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Propaganda_Sign_E_C : public ABP_Sign_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0798, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget_SignDisplay1;  // 0x07A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Propaganda_Sign_E(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMaxCharacters(TArray<int32>& MaxCharacters) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSignWidgets(TArray<UUMG_Sign_Text_Display_C*>& Widgets) const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
