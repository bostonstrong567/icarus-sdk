// /Game/BP/Objects/World/Items/Deployables/Signs/BP_Sign_Base.BP_Sign_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Sign_Base_C : public ABP_DeployableBase_C, public ISignRecorderInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget_SignDisplay;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FText Text;  // 0x0740, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCharacters;  // 0x0758, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FLinearColor FontColor;  // 0x075C, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FItemableRowHandle IconRow;  // 0x076C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SupportsIcons;  // 0x0784, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETextJustify> TextJustification;  // 0x0785, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLinearColor> SupportedColourOverrides;  // 0x0788, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EditorDebugIcon();
    UFUNCTION() void ExecuteUbergraph_BP_Sign_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMaxCharacters(TArray<int32>& MaxCharacters) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FLinearColor GetSignColor() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FItemableRowHandle GetSignIconRow() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FText GetSignText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSignWidgets(TArray<UUMG_Sign_Text_Display_C*>& Widgets) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_FontColor();
    UFUNCTION(BlueprintCallable) void OnRep_IconRow();
    UFUNCTION(BlueprintCallable) void OnRep_Text();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void SetSignIcon(const FItemableRowHandle& IconRow);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void SetSignText(const FText& Text, const FLinearColor& Color);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void UpdateIcon(FItemableRowHandle IconRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateSignWidgetText();
    UFUNCTION(BlueprintCallable) void UpdateTextRender(const FText& Text, FLinearColor Color);  // parameters 0x28
};
