// /Game/UI/Debug/UMG_GOAPCharacterDebug.UMG_GOAPCharacterDebug_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x38A, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GOAPCharacterDebug_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Expand;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Actions;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Header;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExpandableArea* ExpandableArea_84;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Goals;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* GOAPStateNames;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* GOAPStateValues;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* Health;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MotivationNames;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MotivationsValues;  // 0x02B0, size 0x8
    UPROPERTY(Instanced) UTextBlock* ObjectName;  // 0x02B8, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_2;  // 0x02C0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_3;  // 0x02C8, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_9;  // 0x02D0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_12;  // 0x02D8, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_13;  // 0x02E0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_17;  // 0x02E8, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_22;  // 0x02F0, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_235;  // 0x02F8, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_HealthValue_1;  // 0x0300, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_Level;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPController* NPCGOAPController;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCController* NPCController;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGOAPMotivationsRowHandle> MotivationOrder;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ActionsAndGoals;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<FName, int32> State;  // 0x0338, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsFocused;  // 0x0388, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ForceFocus;  // 0x0389, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_GOAPCharacterDebug(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetAction();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetControllerState();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetDistance();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetGoal();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHealth();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetHealthValue();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetLevel();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetMovement();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetName();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetPlan();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetRelationship();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetGoapController(ABP_IcarusNPCGOAPController_C* NewController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupIcarusNPCController(AIcarusNPCController* NewController);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_Motivation(UIcarusGOAPMotivation* Motivation);  // parameters 0x8, named "Update Motivation"
};
