class vec3d
{
public:
    //constructor
    vec3d(float x, float y, float z);

    //getters
    float get_x();
    float get_y();
    float get_z();

    //setters
    void set_x(float x);
    void set_y(float y);
    void set_z(float z);

    // vector algebra methods
    float length();
    vec3d normalize();
    float dot(vec3d v);
    vec3d cross(vec3d v);
    vec3d add(vec3d v);
    vec3d subtract(vec3d v);

private:
    float x;
    float y;
    float z;
};