// /Script/Icarus.TerrainAnchorComponent
// Derives from: UActorComponent > UObject
// size 0xC0, declared in Icarus/Source/Icarus/Systems/Terrains/TerrainAnchorComponent.h

UCLASS(Config=Engine)
class UTerrainAnchorComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnTerrainAchorStateChanged OnTerrainAchorStateChanged;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutoRegisterSubject;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRegisterIfLoaded;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsRegisteredSubject;  // 0x00B3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bRequireFullyLoadedSublevel;  // 0x00B4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ETerrainAnchorState AnchorState;  // 0x00B5, size 0x1
protected:
    UPROPERTY(EditAnywhere) bool bInitialised;  // 0x00B6, size 0x1
    int32 LastUpdatedID;  // 0x00B8, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTerrainAnchorValid() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReevaluateAnchorState();

    // Virtual functions that start here:
    //   GetAnchorBounds
};
