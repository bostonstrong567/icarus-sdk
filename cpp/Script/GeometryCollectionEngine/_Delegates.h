DELEGATE() void NotifyGeometryCollectionPhysicsLoadingStateChange(UGeometryCollectionComponent* FracturedComponent);  // parameters 0x8
DELEGATE() void NotifyGeometryCollectionPhysicsStateChange(UGeometryCollectionComponent* FracturedComponent);  // parameters 0x8
DELEGATE() void OnChaosBreakEvent(const FChaosBreakEvent& BreakEvent);  // parameters 0x30
DELEGATE() void OnChaosBreakingEvents(const TArray<FChaosBreakingEventData>& BreakingEvents);  // parameters 0x10
DELEGATE() void OnChaosCollisionEvents(const TArray<FChaosCollisionEventData>& CollisionEvents);  // parameters 0x10
DELEGATE() void OnChaosTrailingEvents(const TArray<FChaosTrailingEventData>& TrailingEvents);  // parameters 0x10
