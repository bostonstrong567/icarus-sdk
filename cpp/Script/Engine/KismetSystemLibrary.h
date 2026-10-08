// /Script/Engine.KismetSystemLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h

UCLASS()
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static FDebugFloatHistory AddFloatHistorySample(float Value, const FDebugFloatHistory& FloatHistory);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static int32 BeginTransaction(FString Context, FText Description, UObject* PrimaryObject);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static bool BoxOverlapActors(UObject* WorldContextObject, FVector BoxPos, FVector BoxExtent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<UObject> ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static bool BoxOverlapComponents(UObject* WorldContextObject, FVector BoxPos, FVector Extent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<UObject> ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static bool BoxTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x91
    UFUNCTION(BlueprintCallable) static bool BoxTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x99
    UFUNCTION(BlueprintCallable) static bool BoxTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xA1
    UFUNCTION(BlueprintCallable) static bool BoxTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x105
    UFUNCTION(BlueprintCallable) static bool BoxTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x10D
    UFUNCTION(BlueprintCallable) static bool BoxTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, FVector HalfSize, FRotator Orientation, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x115
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSoftClassPath(FSoftClassPath InSoftClassPath, FString& PathString);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakSoftObjectPath(FSoftObjectPath InSoftObjectPath, FString& PathString);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static bool CanLaunchURL(FString URL);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void CancelTransaction(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static bool CapsuleOverlapActors(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<UObject> ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static bool CapsuleOverlapComponents(UObject* WorldContextObject, FVector CapsulePos, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<UObject> ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static bool CapsuleTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x81
    UFUNCTION(BlueprintCallable) static bool CapsuleTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x89
    UFUNCTION(BlueprintCallable) static bool CapsuleTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x91
    UFUNCTION(BlueprintCallable) static bool CapsuleTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xF5
    UFUNCTION(BlueprintCallable) static bool CapsuleTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xFD
    UFUNCTION(BlueprintCallable) static bool CapsuleTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, float HalfHeight, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x105
    UFUNCTION(BlueprintCallable) static void CollectGarbage();
    UFUNCTION(BlueprintCallable) static bool ComponentOverlapActors(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<UObject> ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);  // parameters 0x79
    UFUNCTION(BlueprintCallable) static bool ComponentOverlapComponents(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<UObject> ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x79
    UFUNCTION(BlueprintCallable) static void ControlScreensaver(bool bAllowScreenSaver);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSoftClassPtr<UObject> Conv_ClassToSoftClassReference(const TSubclassOf<UObject>& Class);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static UObject* Conv_InterfaceToObject(const TScriptInterface<IInterface>& Interface);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSoftObjectPtr<UObject> Conv_ObjectToSoftObjectReference(UObject* Object);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_PrimaryAssetIdToString(FPrimaryAssetId PrimaryAssetId);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_PrimaryAssetTypeToString(FPrimaryAssetType PrimaryAssetType);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSoftClassPtr<UObject> Conv_SoftClassPathToSoftClassRef(const FSoftClassPath& SoftClassPath);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSubclassOf<UObject> Conv_SoftClassReferenceToClass(const TSoftClassPtr<UObject>& SoftClass);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_SoftClassReferenceToString(const TSoftClassPtr<UObject>& SoftClassReference);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSoftObjectPtr<UObject> Conv_SoftObjPathToSoftObjRef(const FSoftObjectPath& SoftObjectPath);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static UObject* Conv_SoftObjectReferenceToObject(const TSoftObjectPtr<UObject>& SoftObject);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString Conv_SoftObjectReferenceToString(const TSoftObjectPtr<UObject>& SoftObjectReference);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ConvertToAbsolutePath(FString Filename);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString ConvertToRelativePath(FString Filename);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void CreateCopyForUndoBuffer(UObject* ObjectToModify);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void Delay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool DoesImplementInterface(UObject* TestObject, TSubclassOf<UInterface> Interface);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void DrawDebugArrow(UObject* WorldContextObject, FVector LineStart, FVector LineEnd, float ArrowSize, FLinearColor LineColor, float Duration, float Thickness);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) static void DrawDebugBox(UObject* WorldContextObject, FVector Center, FVector Extent, FLinearColor LineColor, FRotator Rotation, float Duration, float Thickness);  // parameters 0x44
    UFUNCTION(BlueprintCallable) static void DrawDebugCamera(ACameraActor* CameraActor, FLinearColor CameraColor, float Duration);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void DrawDebugCapsule(UObject* WorldContextObject, FVector Center, float HalfHeight, float Radius, FRotator Rotation, FLinearColor LineColor, float Duration, float Thickness);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void DrawDebugCircle(UObject* WorldContextObject, FVector Center, float Radius, int32 NumSegments, FLinearColor LineColor, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis);  // parameters 0x4D
    UFUNCTION(BlueprintCallable) static void DrawDebugCone(UObject* WorldContextObject, FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static void DrawDebugConeInDegrees(UObject* WorldContextObject, FVector Origin, FVector Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, FLinearColor LineColor, float Duration, float Thickness);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static void DrawDebugCoordinateSystem(UObject* WorldContextObject, FVector AxisLoc, FRotator AxisRot, float Scale, float Duration, float Thickness);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static void DrawDebugCylinder(UObject* WorldContextObject, FVector Start, FVector End, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void DrawDebugFloatHistoryLocation(UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, FVector DrawLocation, FVector2D DrawSize, FLinearColor DrawColor, float Duration);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static void DrawDebugFloatHistoryTransform(UObject* WorldContextObject, const FDebugFloatHistory& FloatHistory, const FTransform& DrawTransform, FVector2D DrawSize, FLinearColor DrawColor, float Duration);  // parameters 0x7C
    UFUNCTION(BlueprintCallable) static void DrawDebugFrustum(UObject* WorldContextObject, const FTransform& FrustumTransform, FLinearColor FrustumColor, float Duration, float Thickness);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void DrawDebugLine(UObject* WorldContextObject, FVector LineStart, FVector LineEnd, FLinearColor LineColor, float Duration, float Thickness);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void DrawDebugPlane(UObject* WorldContextObject, const FPlane& PlaneCoordinates, FVector Location, float Size, FLinearColor PlaneColor, float Duration);  // parameters 0x44
    UFUNCTION(BlueprintCallable) static void DrawDebugPoint(UObject* WorldContextObject, FVector Position, float Size, FLinearColor PointColor, float Duration);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) static void DrawDebugSphere(UObject* WorldContextObject, FVector Center, float Radius, int32 Segments, FLinearColor LineColor, float Duration, float Thickness);  // parameters 0x34
    UFUNCTION(BlueprintCallable) static void DrawDebugString(UObject* WorldContextObject, FVector TextLocation, FString Text, AActor* TestBaseActor, FLinearColor TextColor, float Duration);  // parameters 0x44
    UFUNCTION(BlueprintCallable) static int32 EndTransaction();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B);  // parameters 0x51
    UFUNCTION(BlueprintCallable) static void ExecuteConsoleCommand(UObject* WorldContextObject, FString Command, APlayerController* SpecificPlayer);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void FlushDebugStrings(UObject* WorldContextObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void FlushPersistentDebugLines(UObject* WorldContextObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ForceCloseAdBanner();
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetActorBounds(AActor* Actor, FVector& Origin, FVector& BoxExtent);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetActorListFromComponentList(const TArray<UPrimitiveComponent*>& ComponentList, TSubclassOf<UObject> ActorClassFilter, TArray<AActor*>& OutActorList);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetAdIDCount();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetClassDisplayName(TSubclassOf<UObject> Class);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSubclassOf<UObject> GetClassFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FString GetCommandLine();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static void GetComponentBounds(USceneComponent* Component, FVector& Origin, FVector& BoxExtent, float& SphereRadius);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static bool GetConsoleVariableBoolValue(FString VariableName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static float GetConsoleVariableFloatValue(FString VariableName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static int32 GetConsoleVariableIntValue(FString VariableName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static bool GetConvenientWindowedResolutions(TArray<FIntPoint>& Resolutions);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool GetCurrentBundleState(FPrimaryAssetId PrimaryAssetId, bool bForceCurrentState, TArray<FName>& OutBundles);  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDefaultLanguage();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDefaultLocale();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDeviceId();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDisplayName(UObject* Object);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetEngineVersion();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int64 GetFrameCount();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetGameBundleId();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetGameName();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetGameTimeInSeconds(UObject* WorldContextObject);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static UTexture2D* GetGamepadButtonGlyph(FString ButtonKey, int32 ControllerIndex);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetGamepadControllerName(int32 ControllerId);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static FString GetLocalCurrencyCode();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FString GetLocalCurrencySymbol();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMinYResolutionFor3DView();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMinYResolutionForUI();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static UObject* GetObjectFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetObjectName(UObject* Object);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static UObject* GetOuterObject(UObject* Object);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetPathName(UObject* Object);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetPlatformUserDir();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetPlatformUserName();  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FString> GetPreferredLanguages();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrimaryAssetId GetPrimaryAssetIdFromClass(TSubclassOf<UObject> Class);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrimaryAssetId GetPrimaryAssetIdFromObject(UObject* Object);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(TSoftClassPtr<UObject> SoftClassReference);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(TSoftObjectPtr<UObject> SoftObjectReference);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void GetPrimaryAssetIdList(FPrimaryAssetType PrimaryAssetType, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void GetPrimaryAssetsWithBundleState(const TArray<FName>& RequiredBundles, const TArray<FName>& ExcludedBundles, const TArray<FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<FPrimaryAssetId>& OutPrimaryAssetIdList);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetProjectContentDirectory();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetProjectDirectory();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetProjectSavedDirectory();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetRenderingDetailMode();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetRenderingMaterialQualityLevel();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSoftClassPtr<UObject> GetSoftClassReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static TSoftObjectPtr<UObject> GetSoftObjectReferenceFromPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static bool GetSupportedFullscreenResolutions(TArray<FIntPoint>& Resolutions);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetSystemPath(UObject* Object);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetUniqueDeviceId();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetVolumeButtonsHandledBySystem();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void HideAdBanner();
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsControllerAssignedToGamepad(int32 ControllerId);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsDedicatedServer(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool IsInterstitialAdAvailable();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool IsInterstitialAdRequested();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsLoggedIn(APlayerController* SpecificPlayer);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsPackagedForDistribution();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool IsScreensaverEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsServer(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsSplitScreen(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsStandalone(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsUnattended();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValid(UObject* Object);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidClass(TSubclassOf<UObject> Class);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidPrimaryAssetId(FPrimaryAssetId PrimaryAssetId);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidPrimaryAssetType(FPrimaryAssetType PrimaryAssetType);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidSoftClassReference(const TSoftClassPtr<UObject>& SoftClassReference);  // parameters 0x29
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValidSoftObjectReference(const TSoftObjectPtr<UObject>& SoftObjectReference);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static void K2_ClearAndInvalidateTimerHandle(UObject* WorldContextObject, FTimerHandle& Handle);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void K2_ClearTimer(UObject* Object, FString FunctionName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void K2_ClearTimerDelegate(FTimerDynamicDelegate Delegate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void K2_ClearTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static float K2_GetTimerElapsedTime(UObject* Object, FString FunctionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float K2_GetTimerElapsedTimeDelegate(FTimerDynamicDelegate Delegate);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float K2_GetTimerElapsedTimeHandle(UObject* WorldContextObject, FTimerHandle Handle);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float K2_GetTimerRemainingTime(UObject* Object, FString FunctionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static float K2_GetTimerRemainingTimeDelegate(FTimerDynamicDelegate Delegate);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static float K2_GetTimerRemainingTimeHandle(UObject* WorldContextObject, FTimerHandle Handle);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static FTimerHandle K2_InvalidateTimerHandle(FTimerHandle& Handle);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_IsTimerActive(UObject* Object, FString FunctionName);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_IsTimerActiveDelegate(FTimerDynamicDelegate Delegate);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_IsTimerActiveHandle(UObject* WorldContextObject, FTimerHandle Handle);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_IsTimerPaused(UObject* Object, FString FunctionName);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_IsTimerPausedDelegate(FTimerDynamicDelegate Delegate);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_IsTimerPausedHandle(UObject* WorldContextObject, FTimerHandle Handle);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_IsValidTimerHandle(FTimerHandle Handle);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void K2_PauseTimer(UObject* Object, FString FunctionName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void K2_PauseTimerDelegate(FTimerDynamicDelegate Delegate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void K2_PauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static FTimerHandle K2_SetTimer(UObject* Object, FString FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FTimerHandle K2_SetTimerDelegate(FTimerDynamicDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_TimerExists(UObject* Object, FString FunctionName);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_TimerExistsDelegate(FTimerDynamicDelegate Delegate);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_TimerExistsHandle(UObject* WorldContextObject, FTimerHandle Handle);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void K2_UnPauseTimer(UObject* Object, FString FunctionName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void K2_UnPauseTimerDelegate(FTimerDynamicDelegate Delegate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void K2_UnPauseTimerHandle(UObject* WorldContextObject, FTimerHandle Handle);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void LaunchURL(FString URL);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static bool LineTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x79
    UFUNCTION(BlueprintCallable) static bool LineTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x81
    UFUNCTION(BlueprintCallable) static bool LineTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x89
    UFUNCTION(BlueprintCallable) static bool LineTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xED
    UFUNCTION(BlueprintCallable) static bool LineTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xF5
    UFUNCTION(BlueprintCallable) static bool LineTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xFD
    UFUNCTION(BlueprintCallable) static void LoadAsset(UObject* WorldContextObject, TSoftObjectPtr<UObject> Asset, FOnAssetLoaded OnLoaded, FLatentActionInfo LatentInfo);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void LoadAssetClass(UObject* WorldContextObject, TSoftClassPtr<UObject> AssetClass, FOnAssetClassLoaded OnLoaded, FLatentActionInfo LatentInfo);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static UObject* LoadAsset_Blocking(TSoftObjectPtr<UObject> Asset);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TSubclassOf<UObject> LoadClassAsset_Blocking(TSoftClassPtr<UObject> AssetClass);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void LoadInterstitialAd(int32 AdIdIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool MakeLiteralBool(bool Value);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) static uint8 MakeLiteralByte(uint8 Value);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) static float MakeLiteralFloat(float Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 MakeLiteralInt(int32 Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName MakeLiteralName(FName Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString MakeLiteralString(FString Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FText MakeLiteralText(FText Value);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSoftClassPath MakeSoftClassPath(FString PathString);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSoftObjectPath MakeSoftObjectPath(FString PathString);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void MoveComponentTo(USceneComponent* Component, FVector TargetRelativeLocation, FRotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, TEnumAsByte<EMoveComponentAction> MoveAction, FLatentActionInfo LatentInfo);  // parameters 0x48
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString NormalizeFilename(FString InFilename);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_PrimaryAssetId(FPrimaryAssetId A, FPrimaryAssetId B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_PrimaryAssetType(FPrimaryAssetType A, FPrimaryAssetType B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_SoftClassReference(const TSoftClassPtr<UObject>& A, const TSoftClassPtr<UObject>& B);  // parameters 0x51
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_SoftObjectReference(const TSoftObjectPtr<UObject>& A, const TSoftObjectPtr<UObject>& B);  // parameters 0x51
    UFUNCTION(BlueprintCallable) static void ParseCommandLine(FString InCmdLine, TArray<FString>& OutTokens, TArray<FString>& OutSwitches, TMap<FString, FString>& OutParams);  // parameters 0x80
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool ParseParam(FString InString, FString InParam);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool ParseParamValue(FString InString, FString InParam, FString& OutValue);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void PrintString(UObject* WorldContextObject, FString InString, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void PrintText(UObject* WorldContextObject, FText InText, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void PrintWarning(FString InString);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void QuitGame(UObject* WorldContextObject, APlayerController* SpecificPlayer, TEnumAsByte<EQuitPreference> QuitPreference, bool bIgnorePlatformRestrictions);  // parameters 0x12
    UFUNCTION(BlueprintCallable) static void RegisterForRemoteNotifications();
    UFUNCTION(BlueprintCallable) static void ResetGamepadAssignmentToController(int32 ControllerId);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void ResetGamepadAssignments();
    UFUNCTION(BlueprintCallable) static void RetriggerableDelay(UObject* WorldContextObject, float Duration, FLatentActionInfo LatentInfo);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void SetBoolPropertyByName(UObject* Object, FName PropertyName, bool Value);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void SetBytePropertyByName(UObject* Object, FName PropertyName, uint8 Value);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void SetClassPropertyByName(UObject* Object, FName PropertyName, TSubclassOf<UObject> Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetCollisionProfileNameProperty(UObject* Object, FName PropertyName, const FCollisionProfileName& Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetColorPropertyByName(UObject* Object, FName PropertyName, const FColor& Value);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void SetFieldPathPropertyByName(UObject* Object, FName PropertyName, const FFieldPath& Value);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void SetFloatPropertyByName(UObject* Object, FName PropertyName, float Value);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void SetGamepadsBlockDeviceFeedback(bool bBlock);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetInt64PropertyByName(UObject* Object, FName PropertyName, int64 Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetIntPropertyByName(UObject* Object, FName PropertyName, int32 Value);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void SetInterfacePropertyByName(UObject* Object, FName PropertyName, const TScriptInterface<IInterface>& Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetLinearColorPropertyByName(UObject* Object, FName PropertyName, const FLinearColor& Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNamePropertyByName(UObject* Object, FName PropertyName, const FName& Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetObjectPropertyByName(UObject* Object, FName PropertyName, UObject* Value);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetRotatorPropertyByName(UObject* Object, FName PropertyName, const FRotator& Value);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void SetSoftClassPropertyByName(UObject* Object, FName PropertyName, const TSoftClassPtr<UObject>& Value);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void SetSoftObjectPropertyByName(UObject* Object, FName PropertyName, const TSoftObjectPtr<UObject>& Value);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void SetStringPropertyByName(UObject* Object, FName PropertyName, FString Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetStructurePropertyByName(UObject* Object, FName PropertyName, const FGenericStruct& Value);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static void SetSuppressViewportTransitionMessage(UObject* WorldContextObject, bool bState);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetTextPropertyByName(UObject* Object, FName PropertyName, const FText& Value);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void SetTransformPropertyByName(UObject* Object, FName PropertyName, const FTransform& Value);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void SetUserActivity(const FUserActivity& UserActivity);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void SetVectorPropertyByName(UObject* Object, FName PropertyName, const FVector& Value);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static void SetVolumeButtonsHandledBySystem(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetWindowTitle(const FText& Title);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void ShowAdBanner(int32 AdIdIndex, bool bShowOnBottomOfScreen);  // parameters 0x5
    UFUNCTION(BlueprintCallable) static void ShowInterstitialAd();
    UFUNCTION(BlueprintCallable) static void ShowPlatformSpecificAchievementsScreen(APlayerController* SpecificPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ShowPlatformSpecificLeaderboardScreen(FString CategoryName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SnapshotObject(UObject* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static bool SphereOverlapActors(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<UObject> ActorClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors);  // parameters 0x51
    UFUNCTION(BlueprintCallable) static bool SphereOverlapComponents(UObject* WorldContextObject, FVector SpherePos, float SphereRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<UObject> ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x51
    UFUNCTION(BlueprintCallable) static bool SphereTraceMulti(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x79
    UFUNCTION(BlueprintCallable) static bool SphereTraceMultiByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x81
    UFUNCTION(BlueprintCallable) static bool SphereTraceMultiForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x91
    UFUNCTION(BlueprintCallable) static bool SphereTraceSingle(UObject* WorldContextObject, FVector Start, FVector End, float Radius, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xED
    UFUNCTION(BlueprintCallable) static bool SphereTraceSingleByProfile(UObject* WorldContextObject, FVector Start, FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xF5
    UFUNCTION(BlueprintCallable) static bool SphereTraceSingleForObjects(UObject* WorldContextObject, FVector Start, FVector End, float Radius, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0x105
    UFUNCTION(BlueprintCallable) static void StackTrace();
    UFUNCTION(BlueprintCallable) static void TransactObject(UObject* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void UnloadPrimaryAsset(FPrimaryAssetId PrimaryAssetId);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void UnloadPrimaryAssetList(const TArray<FPrimaryAssetId>& PrimaryAssetIdList);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void UnregisterForRemoteNotifications();
};
