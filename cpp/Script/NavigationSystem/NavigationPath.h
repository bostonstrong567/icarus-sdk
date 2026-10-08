// /Script/NavigationSystem.NavigationPath
// Derives from: UObject
// size 0x88, declared in Engine/Source/Runtime/NavigationSystem/Public/NavigationPath.h

UCLASS()
class UNavigationPath : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOnNavigationPathUpdated PathUpdatedNotifier;  // 0x0028, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<FVector> PathPoints;  // 0x0038, size 0x10
    UPROPERTY(BlueprintReadOnly) TEnumAsByte<ENavigationOptionFlag> RecalculateOnInvalidation;  // 0x0048, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bIsValid;  // 0x004C, private
    uint32 : 1 bDebugDrawingEnabled;  // 0x004C, private
    FColor DebugDrawingColor;  // 0x0050, private
    FDelegateHandle DrawDebugDelegateHandle;  // 0x0058, private
    TSharedPtr<FNavigationPath,1> SharedPath;  // 0x0060, protected
    TDelegate<void __cdecl(FNavigationPath *,enum ENavPathEvent::Type),FDefaultDelegateUserPolicy> PathObserver;  // 0x0070, protected
    FDelegateHandle PathObserverDelegateHandle;  // 0x0080, protected

    UFUNCTION(BlueprintCallable) void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetDebugString() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPathCost() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPathLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPartial() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsStringPulled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsValid() const;  // parameters 0x1
};
