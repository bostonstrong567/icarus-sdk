// /Game/UI/Projection/W_ProjectionInterface.W_ProjectionInterface_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionInterface_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* ProjectionWidgetCanvas;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_UIProjectionComponent_C*> ProjectionActors;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UW_ProjectionWidget_C*> ProjectionWidgets;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_UIProjectionComponent_C*> NearbyProjectionActors;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxProjectionWidgets;  // 0x02A0, size 0x4

    UFUNCTION(BlueprintCallable) void AddProjectionWidget(UBP_UIProjectionComponent_C* ProjectionActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClampProjectionListToMaxSize(TArray<UActorComponent*>& NearbyProjectionActors);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateProjectionWidget(TSubclassOf<UHuntingWidget> Class, UW_ProjectionWidget_C*& Return);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_W_ProjectionInterface(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceUpdate();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPlayer(APawn*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ProjectionApproved(UBP_UIProjectionComponent_C* Component);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void RemoveProjectionWidget(UW_ProjectionWidget_C* Widget);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void TickWidgets();
    UFUNCTION(BlueprintCallable) void UpdateNearbyProjectionActors();
    UFUNCTION(BlueprintCallable) void UpdateProjectionWidgets();
};
