// /Script/VanguardBPLibrary.VanguardBPFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/VanguardBPLibrary/Source/VanguardBPLibrary/Public/VanguardBPFunctionLibrary.h

UCLASS()
class UVanguardBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool ActorLineTraceSingle(UObject* WorldContextObject, AActor* TargetActor, FVector Start, FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xD9
    UFUNCTION(BlueprintCallable) static void AddActorComponent(AActor* Owner, TSubclassOf<UActorComponent> ActorComponentClass, UActorComponent*& OutComponent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void AddActorComponentWithName(AActor* Owner, TSubclassOf<UActorComponent> ActorComponentClass, FName ComponentName, UActorComponent*& OutComponent);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool BlueprintSuggestProjectileVelocityByChannel(UObject* WorldContextObject, FVector& TossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, TEnumAsByte<ESuggestProjVelocityTraceOption> TraceOption, float CollisionRadius, const TArray<AActor*>& ActorsToIgnore, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, bool bFavorHighArc, bool bDrawDebug);  // parameters 0x64
    UFUNCTION(BlueprintCallable) static void ChangeObjectOuter(UObject* WorldContextObject, UObject* Object, UObject* NewOuter);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool ComponentOverlapComponentsAgainstObjectType(UPrimitiveComponent* Component, const FTransform& ComponentTransform, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, TSubclassOf<UObject> ComponentClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x79
    UFUNCTION(BlueprintCallable) static void DebugLog(EBPLogVerbosity Verbosity, FName LogCategory, FString Message, bool bOutputToMessageLog);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static bool DoesMontageSupportMesh(UAnimMontage* Montage, USkeletalMeshComponent* Mesh);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static AActor* DuplicateActor(AActor* InputActor, bool bDetachOriginal);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool DuplicateActorComponent(UActorComponent* Source, AActor* Parent, UActorComponent*& OutComponent, FName Name);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void FilterActorsByTags(TArray<AActor*>& InActorArray, const TArray<FName>& Tags);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool FindSocketOrTagOnActor(AActor* InActor, const FName& SocketOrTagName, UActorComponent*& FoundComponent, FTransform& FoundWorldTransform);  // parameters 0x51
    UFUNCTION(BlueprintCallable) static void ForceSkeletalMeshUpdate(USkeletalMeshComponent* SkeletalMeshComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static TArray<AActor*> GetActorsInWorld(UWorld* World);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void GetActorsOfClassInWorld(AActor* WorldContext, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetAllActorsOfClassMatchingTagQueries(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const TArray<FGameplayTagQuery>& GameplayTagQueries, TArray<AActor*>& OutActors);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetAllMapNames(FString OverrideSearchPath);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<TSubclassOf<UObject>> GetChildClassesInPath(const FName& FolderPath, TSubclassOf<UObject> ParentClass);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void GetChildWidgetsOfClass(TSubclassOf<UWidget> WidgetClass, UPanelWidget* InParent, TArray<UWidget*>& ChildWidgets, bool SearchRecursively);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static UObject* GetClassDefaultObject(TSubclassOf<UObject> ObjectClass, bool& IsValid);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static float GetClosestPlayerDistanceFromLocation(UObject* WorldContextObject, FVector Location, EFunctionResult& Result);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetHashFromString(FString& String);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static FName GetLevelNameFromStreamingAsset(ULevelStreaming* StreamingLevel);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<TSubclassOf<UObject>> GetLoadedChildClasses(TSubclassOf<UObject> ParentClass);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static float GetMontageBlendOutAlpha(UAnimInstance* AnimInstance, UAnimMontage* Montage);  // parameters 0x14
    UFUNCTION(BlueprintCallable) static int32 GetNumConvexCollisionVerticiesForStaticMesh(UStaticMesh* StaticMesh);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void GetPathFollowingBrakingDistance(UNavMovementComponent* NavMovementComponent, float& OutBrakingDistance);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static UPhysicalMaterial* GetSimplePhysicalMaterial(UPrimitiveComponent* InPrimitiveComponent);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<FName> GetStreamedLevelNames(UObject* WorldContextObject);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TArray<FName> GetStreamedLevelPackageNames(UObject* WorldContextObject);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void GetStreamingLevelFromActor(UObject* WorldContextObject, AActor* Actor, ULevelStreaming*& OutStreamingLevel);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static bool GetTileInfoFromStreamingLevel(UObject* WorldContextObject, ULevelStreaming* StreamingLevel, FVector& OutLocation);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) static TSoftObjectPtr<UWorld> GetWorldFromStreamingAsset(ULevelStreaming* StreamingLevel);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsActorReplicatingMovement(AActor* Actor);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsInEditorViewport(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsUsingFixedPathBrakingDistance(UNavMovementComponent* NavMovementComponent);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsWithEditor();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static bool LineTraceSingleForObjectsWithCustomContext(UObject* WorldContextObject, FVector Start, FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xFD
    UFUNCTION(BlueprintCallable) static bool LineTraceSingleWithCustomContext(UObject* WorldContextObject, FVector Start, FVector End, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);  // parameters 0xED
    UFUNCTION(BlueprintCallable) static TArray<ULevelStreaming*> LoadAllStreamingLevels(UObject* WorldContextObject);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void MakeActorStablyNamed(AActor* Actor, FName NewName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void MakeComponentStablyNamed(UActorComponent* Component, FName NewName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void MarkObjectDirty(UObject* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static float MaxFloat();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static float MaxInt();  // parameters 0x4
    UFUNCTION(BlueprintCallable) static TArray<TSoftObjectPtr<UWorld>> ObjectsToWorlds(const TArray<UObject*>& Objects);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool ProjectOrTraceToNavigablePoint(AActor* WorldContextObject, const FVector& InLocation, FVector& OutProjectedPoint, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, bool bIgnoreSelf, FVector ProjectionExtent, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static bool ProjectReachablePointAtLocation(AActor* WorldContext, const FVector& StartPoint, const FVector& EndPoint, FVector& OutProjectedPoint, FVector ProjectionExtent, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x49
    UFUNCTION(BlueprintCallable) static bool ProjectWorldToScreenOrEdge(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenOrEdgePosition, FVector2D& DirFromCentre, bool& IsOffScreen, bool& IsBehindCamera);  // parameters 0x27
    UFUNCTION(BlueprintCallable) static void QuickLog(FName LogCategory, FString Message);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void ReconstructActor(AActor* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void ReinitAnimationPose(USkeletalMeshComponent* SkeletalMeshComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void SetAllowAnyoneToDestroyComponent(UActorComponent* InComponent, bool AllowAnyone);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetBoneCollisionEnabled(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName, TEnumAsByte<ECollisionEnabled> CollisionEnabled);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void SetCanEverAffectNavigation(UActorComponent* InActorComponent, bool bCanEverAffect);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetFixedPathBrakingDistance(UNavMovementComponent* NavMovementComponent, float FixedPathBrakingDistance);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetLandscapeRVTSettings(ALandscapeProxy* LandscapeProxy, const TArray<URuntimeVirtualTexture*>& VirtualTextures, int32 NumLOD, int32 LODBias);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetMaterialInstanceStaticSwitchParameterValue(UMaterialInstance* MaterialInstance, const FName& ParameterName, const bool& bValue);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static void SetMaxDrawDistance(ULightComponent* LightComponent, float MaxDrawDistance);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetMaxDrawDistanceFadeRange(ULightComponent* LightComponent, float FadeRange);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetPrimitiveAffectsDistanceFieldLighting(UPrimitiveComponent* PrimitiveComponent, bool bAffectsDistanceFieldLighting);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetRenderFocusOutline(bool bEnable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetRenderInDepthPass(UPrimitiveComponent* Component, bool Value);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetShadowResolutionScale(ULightComponent* LightComponent, float ShadowResolutionScale);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetSplineMeshSmoothInterpRollScale(USplineMeshComponent* SplineMeshComponent, bool bUseSmoothInterpRollScale, bool bUpdateMesh);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static TArray<UActorComponent*> SortActorComponentsByDistanceFromOrigin(const TArray<UActorComponent*>& ActorComponents, const FVector& Origin, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static TArray<AActor*> SortActorsByDistanceExtent(const TMap<int32, AActor*>& ActorMap, const FVector& Origin);  // parameters 0x70
    UFUNCTION(BlueprintCallable) static TArray<AActor*> SortActorsByDistanceFromOrigin(const TArray<AActor*>& Actors, const FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static TArray<AActor*> SortActorsByPathCostFromOrigin(UObject* WorldContextObject, const TArray<AActor*>& Actors, const FVector& Origin, bool bIgnoreUnreachable);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static TArray<USceneComponent*> SortComponentsByDistanceFromOrigin(const TArray<USceneComponent*>& SceneComponents, const FVector& Origin);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<FString> SortStringArrayAlphabetically(TArray<FString>& InStringArray);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<FTransform> SortTransformArrayByDistanceFromOrigin(const TArray<FTransform>& Transforms, const FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static TArray<FVector> SortVectorArrayByDistanceFromOrigin(const TArray<FVector>& Locations, const FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static void SpawnActorOfClass(AActor* WorldContext, TSubclassOf<AActor> Class, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner, APawn* Instigator, AActor*& OutActor);  // parameters 0x60
};
