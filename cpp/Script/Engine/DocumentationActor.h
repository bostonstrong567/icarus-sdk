// /Script/Engine.DocumentationActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/DocumentationActor.h

UCLASS(Config=Engine)
class ADocumentationActor : public AActor
{
public:

    // Not reflected: the engine's scripting cannot see these.
    EDocumentationActorType::Type LinkType;  // 0x0220, private
};
