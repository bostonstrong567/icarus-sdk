// /Script/Icarus.IcarusMapIconComponent
// Derives from: UActorComponent > UObject
// size 0x1F0, declared in Icarus/Source/Icarus/UI/Map/IcarusMapIconComponent.h

UCLASS(Config=Engine)
class UIcarusMapIconComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapIconsRowHandle MapIconData;  // 0x00B0, size 0x18
    UPROPERTY(BlueprintReadWrite) AActor* IconParentActor;  // 0x00C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UUserWidget* GeneratedIconWidget;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIconIsVisible;  // 0x00D8, size 0x1
    UPROPERTY(BlueprintAssignable) FOnIconVisibilityChanged OnIconVisibilityChanged;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSetupIconAutomatically;  // 0x00F0, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FStreamableManager StreamableManager;  // 0x00F8, private
    TSharedPtr<FStreamableHandle,0> Handle;  // 0x01E0, private

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetSetupIconAutomatically() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasWidgetBeenConstructed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSetupIconAutomatically(bool bAutomaticSetup);  // parameters 0x1
    UFUNCTION() void SetupMapIcon();
    UFUNCTION(BlueprintCallable) void TryRemoveMapIcon();
    UFUNCTION(BlueprintCallable) void TrySetupMapIcon();
};
